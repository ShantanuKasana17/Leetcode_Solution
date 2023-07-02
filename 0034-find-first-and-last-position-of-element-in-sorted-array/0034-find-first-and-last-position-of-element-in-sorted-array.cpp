class Solution {
private: 
    int firstOcc(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
    int SecondOcc(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ;
        ans.push_back(firstOcc(nums,target));
        ans.push_back(SecondOcc(nums,target));
        return ans ;
    }
};