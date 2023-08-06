#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */

   int num = 5;
   int *ptr = &num;
   cout << "content of ptr " << ptr << endl;
   cout << "address of ptr " << &ptr << endl;
   cout << "value at ptr " << *ptr << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
   (*t)++; 
    cout << *t << endl; // --> it will increase value at address
    
    cout << " before t " << t << endl;
    t++; //--> t will points to next memory block
    cout << " after t " << t << endl;


    return 0;
}