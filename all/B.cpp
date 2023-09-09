#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,4,5};
  int ub=upper_bound(v.begin(),v.end(),3)-v.begin();
  cout<<ub;

}