class Solution {
public:
    
    // to calcualt max element
    int maxElement(vector<int> &arr){
        
        int maxi = INT_MIN;
        for(int i =0;i<arr.size();i++){
            maxi = max(maxi,arr[i]);
        }
        return maxi;
    }
    
    // calculate no totalhours
    long long calculate_totalhours(vector<int>&arr,int hourly){
        
        long long totalhours = 0;
        for(int i = 0;i<arr.size();i++){
            totalhours += (arr[i] + hourly -1)/ hourly;
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = maxElement(piles);
        while(low < high){
            int mid = low + (high-low)/2;
            int totalhours = calculate_totalhours(piles,mid);
            
            if(totalhours <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};