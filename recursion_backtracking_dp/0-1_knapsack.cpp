#include <bits/stdc++.h>
using namespace std;
// int solve_backtrack(vector<int> &wt, vector<int> &profit, int W, int n){
//     if (W == 0 || n ==0)
//         return 0;

//     int result;
//     if (W < wt[n-1])
//         result = solve_backtrack(wt, profit, W, n - 1);
//     else
//     result = max(solve_backtrack(wt, profit, W, n - 1) , profit[n-1] + solve_backtrack(wt, profit, W-wt[n-1], n - 1));
//     return result;
// }

// int solve_backtrack_DPtable(vector<int>&wt, vector<int>&profit,int W, int n,vector<vector<int>>&dp){
// if(n==0||W==0)
// return 0;
// if(dp[n][W]!=-1)
// return dp[n][W];
// int result;
//     if (W < wt[n-1])
//     result = solve_backtrack_DPtable(wt, profit, W, n - 1,dp);
//     else
// result =max(solve_backtrack_DPtable(wt, profit, W, n - 1,dp) ,profit[n-1]+solve_backtrack_DPtable(wt, profit, (W-wt[n-1]), n - 1,dp));
//     return dp[n][W]=result;
// }

int solve_DPtable_bottomUp(vector<int>&wt,vector<int>&profit,int W,int n,vector<vector<int>>&dp){
   for(int i=0;i<n+1;i++)
     dp[i][0]=0;
    for(int j=0;j<W+1;j++)
    dp[0][j]=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(j<wt[i-1])  //condition to exclude
            dp[i][j]=dp[i-1][j];
            else        //condition to include
            {
                dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    return dp[n][W];
}
int main(){
    // return the maximum profit for the given wt,profit,W (each item can use only once)
    vector<int> wt = {1, 2, 7};
    vector<int> profit = {20, 3, 5};
    int W = 4;
    int n = wt.size();

    // cout << solve_backtrack(wt, profit, W, n) << endl;


vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
    // cout<<solve_backtrack_DPtable(wt, profit, W, n,dp)<<endl;
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<W+1;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }

    cout<<solve_DPtable_bottomUp(wt, profit, W, n,dp);
}