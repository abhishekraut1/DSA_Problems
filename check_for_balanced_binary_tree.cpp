#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int height(Node *node){
    if(node==NULL)
        return 0;
    
    int lh = height(node->left);
    if(lh == -1) return -1;
    int rh = height(node->right);
    if(rh == -1) return -1;
    
    if(abs(lh-rh)>1) return -1;
    
    return 1+max(lh,rh);
}

bool isBalanced(Node *node)
{
    int ht = height(node);
    
    return ht>0 ? true:false;
}

int main(){
//        10
//       /  \
//     20   30
//         /  \
//        40   50
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout<<isBalanced(root);
    return 0;
}