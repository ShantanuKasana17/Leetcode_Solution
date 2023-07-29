class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		
        int sum=0;
		int res=INT_MIN;
		int n=nums.size();
        
        if(n == 0){ 
            
             return 0;
        } 
           
		
		for(int i=0;i<n;i++){

			sum+=nums[i];
            
			if(sum<nums[i]){
                
				sum=nums[i];
			}
			res=max(sum,res);

		}
		return res;

	}
};