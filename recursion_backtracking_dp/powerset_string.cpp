#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ABC";
    int n=s.size();
    vector<string>ans;

    for(int i=0;i<(1<<n);i++)
    {
        string temp="";
        // analysing for i=5, 101 places A_C output in temp
        for(int j=n-1;j>=0;j--)
        {
    //bit read right to left and index of string read left to right            
            if(i&(1<<j))
            temp=temp+s[n-1-j]; 
            else
            temp=temp+"_";  
        }
        ans.push_back(temp);
    }
     for(auto i:ans)
      cout<<i<<endl;
}