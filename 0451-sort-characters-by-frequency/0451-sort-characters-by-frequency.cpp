class Solution {
public:
    static bool sortchar(pair<char,int> &a,pair<char,int> &b){
        // sorting according to the freq of characters
        return a.second>b.second;
    }
    string frequencySort(string s) {
        
        // declaring vector pair to store char and freq
        vector<pair<char,int>> v(256);
        
        for(auto it:s){
            
            v[it].first = it; // store char 
            v[it].second+=1; // store freq
        }
        sort(v.begin(),v.end(),sortchar);
        
        // to store ans
        string ans;
        
        for(auto it:v){
            for(int j = 0;j<it.second;j++){
                
                ans += it.first;
            }
        }
        return ans;
        
        
    }
};