#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("abhi");
    s.push("govinda");
    s.push("raut");

    s.pop();
    cout<<"Element at top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"stack is empty: "<<s.empty();
return 0;
}