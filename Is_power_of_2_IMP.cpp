#include<iostream>
#include<math.h>
using namespace std;
// Method One
bool isPowOf2(int n){
  if(n & (n-1)) // if n & (n-1) == 0 then n is power two
    return false;
  else
    return true;
  
}
// Method Two
bool _isPowOf2(int n){
  int count = 0;
    while(n!=0){
        if(n&1){
          count++;
        }
        n = n>>1; //(counting ones) dividing by two
    }
    if(count==1)   //if (count of set bits i.e no of ones = 1) then  
      return true; //its value will be power of 2
    else
      return false;
}
// Method Three
bool __isPowOf2(int n){
 int ans = 1;
    for(int i=0;i<30;i++){
            
    if(ans==n){
      return true;
    }
    if(ans<INT_MAX/2){
      ans = ans*2;   //multiplying by 2 and compairing
    }
  }
     return false;
}


int main(){
    cout<<"Enter the integer number : ";
    int n;
    cin>>n;
    if(isPowOf2(n)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    if(_isPowOf2(n)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    if(__isPowOf2(n)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
      return 0;
}