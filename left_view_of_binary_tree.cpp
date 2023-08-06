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

// TC = O(n)
void help(Node *node,int level,vector<int> &ans){
    if(node==NULL)
        return;
    
    if(ans.size() == level){
        ans.push_back(node->data);
    }
    help(node->left,level+1,ans);
    help(node->right,level+1,ans);
}

vector<int> leftView(Node *root)
{
    vector<int>ans;
    help(root,0,ans);
    return ans;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    vector<int>v = leftView(root);

    for(int x:v) cout<<x<<" ";
    cout<<endl;
   
return 0;
}