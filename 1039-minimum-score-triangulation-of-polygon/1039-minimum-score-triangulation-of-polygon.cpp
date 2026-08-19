class Solution {
public:

    int SolveMem(vector<int>&v,int i, int j, vector<vector<int>>&dp){
        if(i+1==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans,v[i]*v[j]*v[k]+SolveMem(v,i,k,dp)+SolveMem(v,k,j,dp));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return SolveMem(values,0,n-1,dp);
        
    }
};