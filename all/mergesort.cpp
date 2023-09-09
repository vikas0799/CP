#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int l,int mid,int r)
{
    
      int i, j, k;  
    int n1 = mid-l+1;    
    int n2 = r-mid;    
    int LeftArray[n1], RightArray[n2];
      
      //data copy 
    for (int i = 0; i<n1; i++)    
    LeftArray[i] = v[l+i];    
    for (int j = 0;j<n2;j++)    
    RightArray[j] = v[mid+1+j];    
      
    i = 0,j=0,k=l;   //initial values
    while (i<n1 && j<n2)    
    {    
        if(LeftArray[i]<=RightArray[j]){    
            v[k]=LeftArray[i];    
            i++;    
        }    
        else{    
            v[k]=RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while(i<n1){    
        v[k]=LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while(j<n2){    
        v[k]=RightArray[j];    
        j++;    
        k++;    
    }    
}
void Mergesort(vector<int> &v,int l,int r)
{
    int mid;
    if(l<r)
    {
     mid=(l+r)/2;
    Mergesort(v,l,mid);
    Mergesort(v,mid+1,r);
    merge(v,l,mid,r);
    }
}
int main()
{
    vector<int>v={5,3,1,6,8,7,4,2};
    int n=v.size();

    Mergesort(v,0,n);
    for(auto i:v)
     cout<<i<<" ";
}