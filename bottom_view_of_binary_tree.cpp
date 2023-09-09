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
vector <int> bottomView(Node *root) {
    queue<pair<Node*,int>>q;
    q.push({root,0});
    map<int,int>mp;
    while(q.size()){
        auto curr = q.front();
        q.pop();
        Node *node = curr.first;
        int x = curr.second;
        mp[x] = node->data;
        if(node->left){
            q.push({node->left,x-1});
        }
        if(node->right){
            q.push({node->right,x+1});
        }
    }
    vector<int>ans;
    for(auto x:mp){
        ans.push_back(x.second);
    }
    
    return ans;
}

int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    vector<int>v = bottomView(root);

    for(int x:v) cout<<x<<" ";
    cout<<endl;
   
return 0;
}