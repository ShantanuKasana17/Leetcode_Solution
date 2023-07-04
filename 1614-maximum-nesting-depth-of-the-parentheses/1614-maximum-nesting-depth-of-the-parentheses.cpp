class Solution {
public:
    int maxDepth(string s) {
        
        int  first = 0;
        int ans = 0;
        
        for(int i = 0; i<s.length();i++){
            
            if(s[i]=='('){
                first++;
            }
            else if(s[i]== ')'){
                ans = max(ans,first);
                first --;
            }
        }
        return ans;
    }
};