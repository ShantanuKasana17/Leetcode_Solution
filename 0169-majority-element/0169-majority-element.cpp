// moores voting algo 
// optimized approach 
// 0(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0;
        int count = 0;
        for(auto it : nums){
            if(count == 0){
                maj = it;
            }
            if(maj == it){
                count++;
            }
            else{
                count--;
            }
            
        }
        return maj;

    }
};