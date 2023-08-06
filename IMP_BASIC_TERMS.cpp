#include <iostream>
using namespace std;
int main()
{
 /*******float,double & long double Literals******
  int         a    =    5;
   |          |        |
   v          v      v
 data_type  variable  Literal
  */

float a=73.772f; 
double b=73.772;
long double c=73.772l;
float d=73.772;
cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<endl;

// Size of decimal nos. having different Literals
cout<<"size of a is "<<sizeof(73)<<endl;//Any decimal no. is taken as double
cout<<"size of c is "<<sizeof(34.99f)<<endl;//float
cout<<"size of b is "<<sizeof(38.3)<<endl;//double
cout<<"size of d is "<<sizeof(73.44l)<<endl;//long double
 
 /***********Type Casting**********/
 float x=6.78;
 cout<<"\nfloat to int: "<<int(x)<<endl;
 cout<<"float to int: "<<(int)x<<endl;
//       OR       //
  float f =45.33;
  int r = int(f);
  cout<<"\nfloat to int: "<<r<<endl<<endl;
 
 //*********Refrence variable**********
   float p =1.23;
   float & q = p;
   cout<<p<<endl;
   cout<<q<<endl;
   
   return 0;
 }