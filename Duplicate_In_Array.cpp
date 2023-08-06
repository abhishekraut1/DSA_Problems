#include<iostream>
using namespace std;
//Q. You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
int main(){
    int arr[100] = {8 ,7, 2, 5, 4, 7, 1, 3, 6};
    int size = 9;
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i]; // ex.- 3^3 = 0, 2^5=1
    }
	for(int i=1;i<size;i++){
        ans = ans^i;
    }
    cout<<ans<<endl;
    cout<<(2^7)<<" "<<(39^!5^!34);
    return 0;
}