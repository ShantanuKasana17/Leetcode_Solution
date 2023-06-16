//Optimised approach 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int> mp;
        int presum = 0;
        int count = 0;
        mp[0] = 1;
        for(int i =0;i<nums.size();i++){
            
            presum += nums[i];
            int remove = presum-k;
            count += mp[remove];
            mp[presum] +=1;
        }  
        return count;
    }     
};