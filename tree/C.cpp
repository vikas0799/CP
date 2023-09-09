#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    long long int m; cin>>m;
    vector<long long int>v(n);
    for(long long int i=0;i<n;i++)
    cin>>v[i];

    long long int ans=0,sum=0;
    for(long long int i=0;i<n;i++){
        long long int sum=v[i];
        for(long long int j=i+1;j<n;j++){
            if(sum<m)
            ans=max(ans,sum);
            else{
               ans=max(ans,sum-m);
            }
            sum=sum+v[j];
        }
    }
    cout<<ans<<endl;
    return 0;
}
