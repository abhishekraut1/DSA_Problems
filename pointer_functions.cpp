#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl; 

}

void update(int *p) {

//    p = p + 1;
//    cout << "inside "<< p <<endl;
   *p = *p + 3;

}

int getSum(int *arr, int n) {

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *p = &value;
    //print(p);
    // cout <<" Before " << p << endl;
    cout <<" Before " << *p << endl;
    update(p);
    // cout <<" After " << p << endl; --> it will not change
    cout <<" After " << *p << endl;

    int arr[6] = {1,2,3,4,5,8};

    cout << getSum(arr+3 ,3) << endl ; // 4 to 8  

    return 0;
}