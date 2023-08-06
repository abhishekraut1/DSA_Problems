#include<bits/stdc++.h>
using namespace std;
void print(const int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    const int i = 10; // value of i can't be changed
    int arr[] = {1,3,4,5,6};
    print(arr);

    int j  = 99;
    //(1) value at ptr is constant :

    // const int *ptr;
    // ptr = &j;
    // ptr++; --> RUN
    // (*ptr)++; --> THROWS ERROR

    //******* OR ***********

    // int const *ptr;
    // ptr = &j;
    // ptr++; --> RUN
    //(*ptr)++; //--> THROWS ERROR

    //(2) value of ptr (i.e address) is constant :
    // int * const ptr = &j;
    // p++; --> THROWS ERROR
    // (*p++); --> RUN

    //(3) Both value of ptr and value at ptr are const
    // const int * const ptr = &j;
    // ptr++; --> THROWS ERROR
    // (*ptr)++; --> THROWS ERROR
return 0;
}