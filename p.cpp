#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>stu;
    stu.insert(2);
    stu.insert(6);
    stu.insert(3);
    stu.insert(2);
    stu.insert(9);
    stu.insert(34);
    stu.insert(22);
    stu.insert(6);
    // for(int i:stu){
    //     cout<<i<<endl;
    // }
    for(auto i:stu){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it = stu.begin(),prev;
    bool b = false;

    for (;it!=stu.end();it++)
    {
        if(b == true){
            stu.erase(prev);
        }
        int val = *it;
        cout<<val<<" ";
        prev = it;
        if(b == false)b = true;    }
    cout<<endl;
    stu.erase(prev);
    cout<<stu.size()<<endl;
    return 0;
}