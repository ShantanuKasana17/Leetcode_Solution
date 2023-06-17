class Solution {
public:
    
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        
        vector<vector<int>> a(2, vector<int>(n+1, INT_MAX));
        sort(arr2.begin(), arr2.end());
        arr2.resize(unique(arr2.begin(), arr2.end()) - arr2.begin());
        
        a[0][0] = arr1[0];
        a[0][1] = arr2[0];
        int last = 1;
        
        for (int i=1; i<n; i++) {
            
            int this_last = -1;
            
            for (int j=last; j>=0; j--) {
                
                int &u = a[(i-1)%2][j];
                
                if (u == INT_MAX)
                    
                    
                    break;
                if (u < arr1[i]) {
                    
                    
                    a[i%2][j] = min(a[i%2][j], arr1[i]);
                    
                    this_last = max(this_last, j);
                }
                
                auto it = upper_bound(arr2.begin(), arr2.end(), u);
                if (it != arr2.end()) {
                    
                    int v = *it;
                    
                    a[i%2][j+1] = min(a[i%2][j+1], v);
                    this_last = max(this_last, j+1);
                }
                u = INT_MAX;
            }
            last = this_last;
        }
        int ans = -1;
        
        for (int j=0; j<=n; j++) {
            
            
            if (a[(n-1)%2][j] != INT_MAX) {
                
                ans = j;
                
                break;
            }
        }
        return ans;
    }
};