class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        
        int low = 0, high=n-1 , m=0;
        
        sort(nums.begin(),nums.end());
        
        while(low <= high){
            m=low+(high-low)/2;
            if(nums[m]==target) return true;
            if(nums[m]>=nums[low]){
                if(nums[m]>=target && nums[low]<=target) high=m-1;
                else low=m+1;
            }
            else {
                if(nums[m]<=target && nums[high]>=target) low=m+1;
                else high=low-1;
            }
        }
        return false;
    }
};