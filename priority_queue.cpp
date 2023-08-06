#include<bits/stdc++.h>
using namespace std;
struct Mycmp{
bool operator()(pair<int,int> &a,pair<int,int> &b){
    return a.second < b.second;
}
};

int main() {
    //(1) largest element is always at top
    // priority_queue<int>pq;
    // pq.push(20);
    // pq.push(23);
    // pq.push(10);

    // cout<<pq.size()<<endl;

    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    //(2) smallest element is always at top
    // priority_queue<int,vector<int>,greater<int>>pq2;
    // pq2.push(20);
    // pq2.push(23);
    // pq2.push(10);

    // cout<<pq2.size()<<endl;

    // while(!pq2.empty()){
    //     cout<<pq2.top()<<endl;
    //     pq2.pop();
    // }

    //(3) Priority Queue using array or vector (MORE OPTIMAL)
    // int arr[5] = {2,5,11,44,3};
    // priority_queue<int>p(arr,arr+5);
    // while(!p.empty()){
    //     cout<<p.top()<<endl;
    //     p.pop();
    // }

    //(4) priority queue of pairs with comparator function
    priority_queue< pair<int,int> , vector<pair<int,int>> ,Mycmp>pq;
    pq.push({4,2});
    pq.push({2,4});
    pq.push({9,9});
    pq.push({33,5});

    while(!pq.empty()){
        cout<<pq.top().first <<" "<<pq.top().second<<endl;
        pq.pop();
    }
return 0;
}