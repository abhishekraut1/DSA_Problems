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
vector<int> verticalOrder(Node *root)
{
    map<int,map<int,vector<int>>>mp;
    queue<pair<Node*,pair<int,int>>>q;
    q.push({root,{0,0}});
    
    while(q.size()){
        auto temp = q.front();
        q.pop();
        Node *node = temp.first;
        int x=temp.second.first; int y=temp.second.second;
        mp[x][y].push_back(node->data);
        
        if(node->left){
            q.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            q.push({node->right,{x+1,y+1}});
        }
    }
    
    vector<int>ans;
    for(auto a:mp){
        for(auto b:a.second){
            for(int x:b.second){
                ans.push_back(x);
            }
        }
    }
    
    return ans;
}


int main() {
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    
    vector<int>v = verticalOrder(root);

    for(int x:v) cout<<x<<" ";
    cout<<endl;
   
return 0;
}