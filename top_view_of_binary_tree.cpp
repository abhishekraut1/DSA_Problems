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
vector<int> topView(Node *root)
{
    queue<pair<Node*,int>>q;
    q.push({root,0});
    map<int,int>mp;
    while(q.size()){
        auto curr = q.front();
        q.pop();
        Node *node = curr.first;
        int column = curr.second;
        if(mp.find(column) == mp.end())
            mp[column]= node->data;
        if(node->left){
            q.push({node->left,column-1});
        }
        if(node->right){
            q.push({node->right,column+1});
        }
    }
    vector<int>ans;
    for(auto a:mp){
        ans.push_back(a.second);
    }
    
    return ans;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    vector<int>v = topView(root);

    for(int x:v) cout<<x<<" ";
    cout<<endl;
   
return 0;
}