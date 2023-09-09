#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int T; cin>>T;
     while(T--)
     {
         string s; cin>>s;
         string pt; cin>>pt;
         long long int n=s.size();
         long long int m=pt.size();
         string str=pt+'#'+s;
         vector<long long int>lps(m+n+1);
           lps[0]=0;long long int i=0,j=1;long long int cnt=0;
         while(j<(m+n+1)){
             
              if(str[j]==str[i]){
                  if(i+1==m)
                  cnt++;
                  lps[j]=i+1;
                  i++;
                  j++;
              }
              else
              {
                  if(i>0){
                    i=lps[i-1];
                  }
                  else{
                      lps[j]=0;
                      j++;
                  }
              }
             
         }
        
         i=m;
         if(cnt==0)
         cout<<"Not Found";
         else{
         cout<<cnt<<endl;
         for(;i<(m+n+1);i++){
             if(lps[i]==m)
             cout<<i-2*m+1<<" ";
         }
         }
         cout<<endl;
     }
     return 0;
}