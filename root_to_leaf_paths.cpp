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
 void helper(Node *node,vector<vector<int>>&ans,vector<int>temp){
     if(node==NULL)
         return;
     
     temp.push_back(node->data);
     
     if(!node->left && !node->right){
         ans.push_back(temp);
         return;
     }
     
     helper(node->left,ans,temp);
     helper(node->right,ans,temp);
     temp.pop_back();
 }
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>>ans;
    vector<int>temp;
    helper(root,ans,temp);
    return ans;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    auto res = Paths(root);

    for(auto x:res){
        for(int i:x){
            cout<<i<<" ";
        }
        cout<<endl;
    }
   
return 0;
}