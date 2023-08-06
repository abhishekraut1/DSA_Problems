#include<bits/stdc++.h>
using namespace std;
// Diameter or Width or Maximum Path of a binary tree
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

int maxPathSum(Node *node,int &maxi){
    if(node==NULL)
        return 0;
    
    int left = max(0,maxPathSum(node->left,maxi));
    int right = max(0,maxPathSum(node->right,maxi));
    
    maxi = max(maxi,left + right + node->data);
    
    return node->data + max(left,right);
}

int findMaxSum(Node* root)
{
    int maxi = INT_MIN;
    maxPathSum(root,maxi);
    return maxi;
}

int main() {
    //          1
    //         / \
    //       2     3
    //      / \
    //    4     5
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout <<findMaxSum(root);
return 0;
}