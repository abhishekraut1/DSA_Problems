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
// TC = O(n), n = count of all nodes including root node;
// SC = O(h) where h is the height of the tree. 

// 6) Level Order Traversal OR BSF
// TC = theta(n)
// SC = O(n)
void levelOrderTraversal(Node *root){
    if(root == NULL)
    return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        cout<< curr->data <<" ";
        
        if(curr->left != NULL)
        q.push(curr->left);

        if(curr->right != NULL)
        q.push(curr->right);
    }
}


int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    cout<<"Level Order Traversal in Tree :"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    
return 0;
}