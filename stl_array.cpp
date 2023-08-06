#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {1,4,6,24,88};
    
    cout<<arr.size()<<endl;
    cout<<"Element at index 2 -> "<<arr.at(2)<<endl;

    cout<<"Empty or not -> "<<arr.empty()<<endl;

    cout<<"First element -> "<<arr.front()<<endl;
    cout<<"Last element -> "<<arr.back()<<endl;
    return 0;
}