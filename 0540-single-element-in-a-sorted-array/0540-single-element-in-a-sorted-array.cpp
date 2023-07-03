class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int low = 1 , high = n-2;
        
        if(n==1) return nums[0]; //if only one element 
        
        if(nums[0] != nums[1]) return nums[0]; // element starting from 1 st idx
        if(nums[n-1] != nums[n-1]) return nums[n-1]; // ele at last idx != its prev ele
        
        
        while(low <= high){
            
            int mid = low+(high-low)/2;
            // checking if the middle element is single element
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];
            
            // on left part
            
            if((mid%2 == 1) && nums[mid-1] == nums[mid] || (mid%2 == 0 && nums[mid] == nums[mid + 1])){
                low = mid + 1;
            }
            // on right part
            else{
                high = mid-1;
            }
        }
        return  nums[low];
        
    }
};