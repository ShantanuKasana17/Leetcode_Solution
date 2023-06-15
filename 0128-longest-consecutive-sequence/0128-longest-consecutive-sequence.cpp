class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return  0;
        sort(nums.begin(),nums.end());
        int lastsmaller = INT_MAX;
        int count = 0;
        int longest = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]-1 == lastsmaller){
                
                count += 1;
                lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i]){
                
                count = 1;
                lastsmaller = nums[i];
            }
            
            longest = max(longest,count);
        }
        return longest;
    }
};