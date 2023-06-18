class Solution {
    long long mod=1000000007;
    long long solve(int i,int j,int& m,int &n,vector<vector<int>>& grid,vector<vector<int>>& dp,int history){
        //base case
        if(i>=m or j>=n or i<0 or j<0 or grid[i][j]<=history){
            return 0;
        }
        if(dp[i][j]!=(-1)){return dp[i][j];}
        long long ans=0;
        ans+=solve(i,j-1,m,n,grid,dp,grid[i][j]); //left
        ans=ans%mod;
        ans+=solve(i,j+1,m,n,grid,dp,grid[i][j]); //right
        ans=ans%mod;
        ans+=solve(i-1,j,m,n,grid,dp,grid[i][j]); //top
        ans=ans%mod;
        ans+=solve(i+1,j,m,n,grid,dp,grid[i][j]);  //bottom
        ans=ans%mod;

        return dp[i][j]=ans+1;
    }
public:
    int countPaths(vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        long long ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans+=solve(i,j,m,n,grid,dp,-1);
                ans=ans%mod;
            }
        }
        return ans;
    }
};
