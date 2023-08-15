#include<bits/stdc++.h>
using namespace std;
//        10
//       /  \
//     20   30
//         /  \
//        40   50

struct Node{
    Node *right;
    Node *left; 
    int data;

    Node(int key){
        data = key;
        right = left = NULL;
    }
};
// 4) Height of Binary Tree OR Maximum Depth in a binary tree
int height(Node *root){
    if(root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1+max(lh,rh);
}

// 5) Print Nodes at K distance
void printKthNode(Node *root,int k){
    if(root == NULL)
    return ;

    if(k == 0){
        cout<<root->data<<" ";
        return;
    }
    
    printKthNode(root->left,k-1);
    printKthNode(root->right,k-1);
}



int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    cout<<"Height of Binary Tree:"<<endl;
    cout<<height(root)<<" ";
    cout<<endl;

    // printKthNode(root,0);
    // cout<<endl;
   
return 0;
}