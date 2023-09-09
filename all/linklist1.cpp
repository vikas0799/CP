#include <bits/stdc++.h>
using namespace std;
struct Node {
  int value;
  Node* next;
  Node(int val){
   value=val;
   next=NULL;
  }
};
int main() {
  Node *head=NULL;
  Node *one=new Node(45);
  Node *two=new Node(23);
  Node *three=new Node(12);
  head=one;
  one->value=1;
  one->next=two;
  two->value=2;
  two->next=three;
  three->value=3;
  three->next=NULL;
  while(head!=NULL)
  {
     cout<<head->value<<"->";
     head=head->next;
  }
  head=one;
  Node *preptr=NULL;
  Node *currptr=head;
  Node *nextptr=head->next;
  while(nextptr!=NULL){
     currptr->next=preptr;
     preptr=currptr;
     currptr=nextptr;
     nextptr=nextptr->next;
  }
  currptr->next=preptr;
  cout<<"after reberse"<<endl;
  while (currptr!=NULL)
  {
     cout<<currptr->value<<"->";
     currptr=currptr->next;
  }
  

}