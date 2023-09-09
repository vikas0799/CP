#include<bits/stdc++.h>
using namespace std;
int main()
{
   int v,e;
   cout<<"Enter number of nodes/vertex and edges"<<endl;
    cin>>v;
   cout<<"Enter Edges in form of node/vertex (x,y)"<<endl;
   cin>>e;
   vector<pair<int,int>> adj[v+1];
   for(int i=1;i<=e;i++){
      int x,y,w; bool dir;
      cin>>x>>y>>w>>dir;
      //dir=1 means bidirection,0-> means unidirection
      if(dir==true){
      adj[x].push_back(make_pair(y,w));
      adj[y].push_back(make_pair(x,w));
      }
      else{
      adj[x].push_back(make_pair(y,w));
      }
   }
   cout<<"adjacency list"<<endl;
   for(int i=1;i<=v;i++)
   {  cout<<i<<"-> [";
      for(int j=0;j<adj[i].size();j++)
       cout<<" ("<<adj[i][j].first<<" "<<adj[i][j].second<<") ";
       cout<<"]"<<endl;
   }
   

}