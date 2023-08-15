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
// 1) Inorder Traversal 
void inorderRec(Node *root){
    if(root == NULL)
        return;
    inorderRec(root->left);
    cout<<root->data<<" ";
    inorderRec(root->right);
}

void inorderIter(Node *root){
    stack<Node*>st;
    Node* curr = root;

    while(true){ 
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            if(st.empty()) break;
            curr = st.top();
            st.pop();
            cout<<curr->data<<" ";
            curr = curr->right;
        }
    }
}
int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout<<"Inorder:"<<endl;
    inorderRec(root);
    cout<<endl;

    inorderIter(root);
    
return 0;
}