#include<bits/stdc++.h>
using namespace std;
struct video{
    string small; //lex small string ids
    long sum = 0; //total sum
    int max_view = 0;  //view[i]
};

int main(){
unordered_map<string,video>mp;
mp["vikas"]={"three",346,34};
mp["aohit"]={"tri",235,45};
for(auto it:mp){
    cout<<it.first<<"->"<<it.second.small<<":"<<
    it.second.sum<<":"<<it.second.max_view<<endl;
}
}