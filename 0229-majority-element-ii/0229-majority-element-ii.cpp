class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
       //  brute approach 
       /* int n = nums.size();
        vector<int> ls;
        for(int i = 0;i<n;i++){
            if(ls == 0) || ls[0] != nums[i]){
               int count = 0;
                for(int j = 0;j<n;j++){
                    if(nums[i]  == nums[j]){
                        count++;
                    }
                }
                if(count > (n/3)){
                    ls.push_back(nums[i]);
                }
                
            }
            if(ls.size() == 2) break;
        }
        return ls;
        */ 
    int n = nums.size();
        vector<int> ls;
        
        map<int,int> mp;
        
        int mini = int(n/3) + 1;  // least occurence of maj element
        
        for(int i = 0;i<n;i++){
            
            mp[nums[i]]++;
            
            if(mp[nums[i]] == mini){
                
                ls.push_back(nums[i]);
            }
            if(ls.size() == 2) break;
        }
        
        return ls;
    }
};