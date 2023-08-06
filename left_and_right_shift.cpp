#include<iostream>
using namespace std;
int main(){
    //This trick is for small numbers only

    //for big numbers left shift gives 'Negative Number'

    // x<<y = x*(2^y)
    cout<< "19<<1 = " << (19<<1) <<endl; //ans = 19x2=38
    cout<< "21<<2 = " << (21<<2) <<endl; //ans = 21x2x2=84  (Multiply)

    // x>>y = Floo( x>(2^y) )
    cout<< "17>>1 = " << (17>>1) <<endl; //ans = 17/2=8
    cout<< "17>>2 = " << (17>>2) <<endl; //ans = 17/2/2=4  (Divide)

     cout<< "777>>2 = " << (777>>2) <<endl;

     cout<< "7>>2 = " << (7>>2) <<endl;
     cout<< "7<<2 = " << (7<<2) <<endl;

    return 0;
}
