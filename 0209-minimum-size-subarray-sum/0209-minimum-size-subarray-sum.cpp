class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i = 0,j = 0;
        int n =  nums.size();
        int sum = 0;
        int ans = 1e9;
        while(j<n){
            sum += nums[j];
            if(sum < target) j++;
            else{
                while(sum >= target){
                    ans= min(ans,j-i+1);
                    sum-=nums[i];
                    i++;
                }
                // if(sum==target)
                j++;
            }
        }
        return ans==1e9 ? 0:ans;
    }
};
