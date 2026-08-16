class Solution {
public:

    int solveMem(int n,vector<int>&days,vector<int>&cost,int index,vector<int>&dp){
    if(index>=n){
        return 0;
    }
    if(dp[index]!=-1) return dp[index];

    int option1=cost[0]+solveMem(n,days,cost,index+1,dp);
    int i;
    for(i=index;i<n && days[i] < days[index]+7;i++);
    int option2=cost[1]+solveMem(n,days,cost,i,dp);

    for(i=index;i<n && days[i]<days[index]+30;i++);
    int option3=cost[2]+solveMem(n,days,cost,i,dp);
    
    dp[index]=min(option1,min(option2,option3));
    return dp[index];
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
    int n = days.size();
    vector<int>dp(n+1,-1);
    return solveMem(n,days,costs,0,dp);
        
    }
};