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

// DFS Traversal
// 2) Preorder Traversal

// RECURSIVE
void preorderRec(Node *root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preorderRec(root->left);
    preorderRec(root->right);
}

// ITERATIVE
void preorderIter(Node *root){
  stack<Node*>st;
  st.push(root);
  
  while(!st.empty()){
      Node *curr = st.top();
      st.pop();
            
      cout<<curr->data<<" ";
      if(curr->right) st.push(curr->right);
      if(curr->left) st.push(curr->left);
  }
}



int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout<<"Preorder:"<<endl;
    preorderRec(root);
    cout<<endl;
    
    preorderIter(root);
return 0;
}