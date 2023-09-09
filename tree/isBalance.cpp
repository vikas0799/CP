#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
        if(root==NULL)
        return 0;
          
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
         if(root==NULL)
        return 1;
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);
        bool third;
        if(diff<=1)
        third= true;
        else 
        third=false;
        
        return(left&&right&&third);
    }
};
int main(){

}