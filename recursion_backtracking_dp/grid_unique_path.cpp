#include<bits/stdc++.h>
using namespace;
int solve(int m,int n,vector<vector<int>>&dp,vector<vector<int>>&obs) {
    if(obs[m][n]==1)    //obstacle
    return dp[m][n]=0;
      if(m==0||n==0)     //boundary 
      return dp[m][n]=1;
      if(dp[m][n]!=-1)     //memoisation
       return dp[m][n];
      dp[m][n]= solve(m-1,n,dp,obs)+solve(m,n-1,dp,obs);
      return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>&obs) {
        int m=obs.size();
        int n=obs[0].size();
        for(int i=1;i<m;i++)    //obstacle handling boundary conditions in row
         obs[i][0]=max(obs[i-1][0],obs[i][0]);
         for(int j=1;j<n;j++)       //obstacle handling boundary conditions in col
         obs[0][j]=max(obs[0][j-1],obs[0][j]);

         vector<vector<int>>dp(m,vector<int>(n,-1));
       return solve(m-1,n-1,dp,obs);
    
    }
int main()
{
    // finding unique paths with obstacle in 2 grid 
    vector<vector<int>>obs=[[1,0,0],0,0,1];

}