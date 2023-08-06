#include<bits/stdc++.h>
using namespace std;
//        10
//       /  \
//     20   30
//         /  \
//        40   50
//       /
//      90
//       \
//       100

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
// SC = O(Height of Tree).

Node* LCA(Node* root ,int n1 ,int n2 )
{
    if(root==NULL || root->data==n1 || root->data==n2)
        return root;
    
    Node *left = LCA(root->left,n1,n2);
    Node *right = LCA(root->right,n1,n2);
    
    if(left==NULL)
        return right;
    else if(right==NULL)
        return left;
    else
        return root;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->left = new Node(90);
    root->right->left->left->right = new Node(100);
    root->right->right = new Node(50);

    cout<<LCA(root,50,90)->data<<endl;
    cout<<LCA(root,20,40)->data<<endl;
   
return 0;
}