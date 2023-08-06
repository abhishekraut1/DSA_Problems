#include<bits/stdc++.h>
using namespace std;
//        10
//       /  \
//     1     1
//    /       \
//    2        2

struct Node{
    Node *right;
    Node *left; 
    int data;

    Node(int key){
        data = key;
        right = left = NULL;
    }
};

// TC = O(n)
bool help(Node* left,Node* right){
    if(left==NULL || right==NULL)
        return left==right;
    if(left->data != right->data)
        return false;
        
    return help(left->left,right->right) && help(left->right,right->left);
}
bool isSymmetric(struct Node* root)
{
    return root==NULL || help(root->left,root->right);
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(1);
    root->right = new Node(1);
    root->left->left = new Node(2);
    root->right->right = new Node(2);
    
    cout<<isSymmetric(root)<<endl;
   
return 0;
}