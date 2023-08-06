#include<bits/stdc++.h>
using namespace std;
//        10
//       /  \
//     20   30
//         /  \
//        40   50
//       /
//      90
//       \
//       100

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
bool helper(Node *node,int x,vector<int> &ans){
    if(node==NULL)
        return false;

    ans.push_back(node->data);

    if(node->data == x)
        return true;

    if(helper(node->left,x,ans) || helper(node->right,x,ans))
        return true;
    
    ans.pop_back();
    return false;
}

vector<int> rootToNode(Node *root,int x)
{
    vector<int>ans;
    helper(root,x,ans);
    return ans;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->left = new Node(90);
    root->right->left->left->right = new Node(100);
    root->right->right = new Node(50);
    
    vector<int>v = rootToNode(root,90);

    for(int x:v) cout<<x<<" ";
    cout<<endl;
   
return 0;
}