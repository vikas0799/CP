#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    long long int m; cin>>m;
    vector<long long int>v(n);
    for(long long int i=0;i<n;i++)
    cin>>v[i];

    long long int left=0,right=0;
     long long int ans=0,sum=0;

        while(right<n){
        sum=sum+v[right];
        if(sum<m){
             ans=max(ans,sum);
             right++;
        }
        else{
          ans=max(ans,sum-m);
           sum=sum-v[left];
           left++;
           if(sum<m)
           ans=max(ans,sum);
        }
     }
    cout<<ans<<endl;
    return 0;
}
