#include<iostream>
#include<math.h>
using namespace std;
//Q. Find the unique number in an array.
int main(){
    int arr[100] = {1,2,1,4,56,7,7,4,2};
    int size = 9;
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i]; // ex.- 3^3 = 0, 2^5=1
    }
    cout<<ans<<endl;
    // cout<<(3^3)<<endl;
    //  cout<<(2^5)<<endl;
    return 0;
}