#include<bits/stdc++.h>
using namespace std;
void Binary(int A[],int n,int idx){
    if(idx==n)
    {
        for(int i=0;i<idx;i++)
            cout<<A[i]<<" ";
            cout<<endl;
    }
    else
    {
        A[idx]=0;
        Binary(A,n,idx+1);
        A[idx]=1;
        Binary(A,n,idx+1);
    }
}
int main()
{
    //Generate all binary string using recursion and bitmasking
    int n; cin>>n;
    int A[n];
    Binary(A,n,0);
}