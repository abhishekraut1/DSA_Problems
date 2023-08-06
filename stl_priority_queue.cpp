#include<iostream>
#include<queue>
using namespace std;
int main() {
    // max heap
    priority_queue<int> maxi;
    maxi.push(23);
    maxi.push(12);
    maxi.push(84);
    maxi.push(2);
    maxi.push(30);

    cout<<"Size of prioriy queue: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    cout<<"is empty: "<<maxi.empty()<<endl;
    
    // min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    mini.push(23);
    mini.push(12);
    mini.push(84);
    mini.push(2);
    mini.push(30);

    cout<<"Size of prioriy queue: "<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }
return 0;
}