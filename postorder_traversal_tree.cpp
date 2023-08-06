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
// 3) Postorder Traversal
void postorderRec(Node *root){
    if(root == NULL)
        return;
    postorderRec(root->left);
    postorderRec(root->right);
    cout<<root->data<<" ";
}

void postorderIter(Node *root){
    vector<int>ans;
    stack<Node*>st;
    st.push(root);
    
    while(st.size()){
        Node *curr = st.top();
        st.pop();
        ans.push_back(curr->data);
        
        if(curr->left!=NULL) st.push(curr->left);
        if(curr->right!=NULL) st.push(curr->right);
    }
    reverse(ans.begin(),ans.end());

    for(int x:ans) cout<<x<<" ";
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout<<"Postorder:"<<endl;
    postorderRec(root);
    cout<<endl;
    
    postorderIter(root);
return 0;
}