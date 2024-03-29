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
// Print all levels of binary tree
void printLevelOrder(Node* root)
{
    // Base Case
    if (root == NULL)
        return;
 
    // Create an empty queue for level order traversal
    queue<Node*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false) {
        // nodeCount (queue size) indicates number
        // of nodes at current level.
        int nodeCount = q.size();
 
        // Dequeue all nodes of current level and
        // Enqueue all nodes of next level
        for(int i=0;i<nodeCount;i++){
            Node* node = q.front();
            cout << node->data << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        cout << endl;
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