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
int height(Node* node,int &d){
    if(node==NULL)
        return 0;
    
    int lh = height(node->left,d);
    int rh = height(node->right,d);
    
    d = max(d,lh+rh);
    
    return 1+max(lh,rh);
}

int diameter(Node* root) {
    int d = 0;
    height(root,d);
    return d+1;
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

    cout << "Diameter of the given binary tree is "<<diameter(root);
return 0;
}