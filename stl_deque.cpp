#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d; //Doubly ended queue
    d.push_back(12);
    d.push_back(92);
    d.push_front(45);
    cout<<"printing deque d after pushing ->"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"element at index 2 -> "<<d.at(2)<<endl;
    cout<<"first element -> "<<d.front()<<endl;
    cout<<"last element -> "<<d.back()<<endl;


    d.pop_back();
    d.pop_front();
    cout<<"printing deque d after poping -> "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.erase(d.begin(),d.begin()+1);
    cout<<"Empty or not -> "<<d.empty()<<endl;
    return 0;
}