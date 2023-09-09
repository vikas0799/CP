#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void traverse(node *temp){
    if(temp==NULL)
    return ;
   
    traverse(temp->left);
     
    traverse(temp->right);
    cout<<temp->data<<endl;
}
int main(){
    node *root=new node(23);
    node *child1=new node(20);
    node *child2=new node(12);
    node *child3=new node(812);

    root->left=child1;
    root->right=child2;
    root->right->right=child3;

    node *temp=root;
   traverse(temp);
}