#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=-90;
    // string str=to_string(a);
    // // cout<<a;
    // int x=stoi(str);
    // cout<<x;
    vector<string>tokens={"-128","-128","*",
    "-128","*","-128","*","8","*","-1","*"};
    stack<string>st;
        for(auto i:tokens){
          if(i=="+"||i=="-"||i=="*"||i=="/"){
            long  long int num1 = stoi(st.top());
             st.pop();
            long  long int num2=stoi(st.top());
              st.pop();
              string op=i,ans;
              if(op=="+")
               ans=to_string(num2+num1);
                if(op=="-")
               ans=to_string(num2-num1);
                if(op=="*")
               ans=to_string(num2*num1);
                if(op=="/")
               ans=to_string(num2/num1);
               cout<<ans<<endl;
               st.push(ans);
              
          }
          else
          st.push(i);
        }
        cout<< stoi(st.top());
}