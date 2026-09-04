class Solution {
public:
    int SolveMem(string& a,string& b, int i, int j,vector<vector<int>>&dp){
        if(i==a.length())  return 0;
        if(j==b.length())  return 0;
        if(dp[i][j]!=-1)  return dp[i][j];

        int ans=0;
        if(a[i]==b[j]){
            ans = 1+SolveMem(a,b,i+1,j+1,dp);
        }else{
            ans = max(SolveMem(a,b,i+1,j,dp),SolveMem(a,b,i,j+1,dp));

        }
        return dp[i][j]=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return SolveMem(text1,text2,0,0,dp);
        
    }
};