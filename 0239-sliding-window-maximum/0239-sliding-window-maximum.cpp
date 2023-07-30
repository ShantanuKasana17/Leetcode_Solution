class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        list <int> ls;
        int maxx = INT_MIN;
        int i=0 , j=0;
        while(j<n)
        {
            while(ls.size()>0 and ls.back()<nums[j])
                ls.pop_back();
            
            ls.push_back(nums[j]);
            
            if(j-i+1<k)j++;
            else if(j-i+1==k)
            {
                
                ans.push_back(ls.front());
                
                if(ls.front()==nums[i])
                    ls.pop_front();
                
                i++;
                j++;
            }
        }
        
        return ans;
    }
};