#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("abhi");
    q.push("govinda");
    q.push("raut");

    q.pop();
    cout<<"Element at front: "<<q.front()<<endl;
    cout<<"Element at back: "<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;
    cout<<"stack is empty: "<<q.empty()<<endl;;

    queue<int>qi;
    qi.push(10);
    qi.push(20);
    qi.push(30);

    while(!qi.empty())
    {
        cout<<qi.front()<<" "<<qi.back()<<endl;
        qi.pop();
    }
return 0;
}