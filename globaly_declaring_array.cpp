#include<iostream>
using namespace std;
int const N = 100;
int arr[N];
int arr2[N][N];
void update(){
    arr[0] = 34;
}
int main() {
    arr[0] = 7;
    cout<<arr[0]<<endl;
    update();
    cout<<arr[0]<<endl;
    return 0;
}