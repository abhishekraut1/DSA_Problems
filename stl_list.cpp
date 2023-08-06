#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l; // implemented by doubly linked list
    l.push_front(12);
    l.push_back(44);
    l.push_back(58);
    l.push_back(92);

    l.pop_back();
    l.pop_front();

    cout<<"printing list l ->"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"first element -> "<<l.front()<<endl;
    cout<<"last element -> "<<l.back()<<endl;

    l.erase(l.begin()); //erase
    return 0;
}