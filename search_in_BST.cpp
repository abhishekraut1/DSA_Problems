#include<bits/stdc++.h>
using namespace std;
//        4
//       /  \
//     2     7
//    /  \
//   1    3

struct Node{
    Node *right;
    Node *left; 
    int data;

    Node(int key){
        data = key;
        right = left = NULL;
    }
};

// TC = log2(n)
// Iterative Search in BST
Node *searchBST(Node *root,int val){
    while(root != NULL && root->data != val)
    {
        root = val < root->data ? root->left : root->right;
    }
    return root;
}

// Recursive
Node* searchBST2(Node* root, int val) {
    if(root==NULL || root->data==val)
        return root;

    if(val < root->data)
        return searchBST(root->left,val);
    else
        return searchBST(root->right,val);
}

int main() {
    struct Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    
    Node *res = searchBST(root,3);

    if(res)
    // cout<<res->left->data<<" "<<res->data<<" "<<res->right->data<<endl;
    cout<<res->data<<endl;
    else
    cout<<res<<endl;

    res = searchBST2(root,7);

    if(res)
    // cout<<res->left->data<<" "<<res->data<<" "<<res->right->data<<endl;
    cout<<res->data<<endl;
    else
    cout<<res<<endl;
   
return 0;
}