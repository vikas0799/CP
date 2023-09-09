#include<bits/stdc++.h>
using namespace std;
int solve(int M,vector<int>coins,int V){
  vector<int>dp(V+1,INT_MAX);
	    dp[0]=0;
	    for(int i=1;i<=V;i++){
	        for(int j=0;j<M;j++)
	        {
	            if(i-coins[j]>=0&&dp[i-coins[j]]!=INT_MAX)
	                dp[i]=min(dp[i],1+dp[i-coins[j]]);
	            
	        }
	    }
	  for(auto i:dp){
      cout<<i<<" ";
    }
    cout<<endl;
	    if(dp[V]==INT_MAX)
	    return -1;
	    else
	    return dp[V];
}
int main()
{
  int M=3,V=5;
  vector<int>coins={1,2,3};
  cout<<"no_of_min_coin"<<solve(M,coins,V);
}
  
