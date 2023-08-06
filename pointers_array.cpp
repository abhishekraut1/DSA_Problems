#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};
    // arr = &arr = &arr[0]
    cout <<" address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;
    cout << "3th " << *arr << endl;
    cout << "4th " << &arr << endl;
    cout << "5th " << *arr + 1 << endl; //increase value
    cout << "5th " << arr + 1 << endl; //increase memory block
    cout << "6th " << *(arr + 1) << endl; //increase pointer
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << *(arr+2) << endl;
    cout << "9th " << *arr << endl;
    // IMP
    int i = 3;
    cout << i[arr] << endl;
return 0;
}