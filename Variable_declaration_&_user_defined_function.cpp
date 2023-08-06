#include <iostream> //WE CAN WRITE SAME NAME TO
using namespace std; //BOTH LOCAL & GLOBAL 
int glo=50;          // VARIABLE.
void global(){
  int a=3,b=0;
  cout<<"The value of glo is "<<glo;
  }
int main()
{
  int a=5,b=7;
  int glo=10;
  cout<<"The value of a = "<<a<<" and \nb = "<<b;
  cout<<"\nThe value of glo = "<<glo;
  cout<<"\n\n";
  global();
  cout<<"\n\nThe value of a = "<<a<<" and \nb = "<<b;
  cout<<"\nThe value of glo = "<<glo;
  
  cout<<"The value of global variable\nglo is "<<::glo;
  return 0;
  }
  
  /* We can give same name two local and 
  Global Variable.But precedence is given to the 
  Local Variable.
 
  TO PRINT GLOBAL VARIABLE:
  1)We have to write:-
  cout<<"The value of global variable glo is"<<::glo;  
   USE SCOPE RESOLUTION OPERATOR
              OR
  2)We have to call User Defined Function in which
  printing is mentioned
   
  */