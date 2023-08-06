#include <iostream>

using namespace std;
bool check(int frames[], int f,int n){
    for (int i=0;i<f;i++){
        if(frames[i]==n) return true;
    }

return false;

} 

int main(){

int arr[20], frames [10];

cout<<"Enter the length of referance string:";
int n; cin>>n;
cout<<"Enter the string: ";
for (int i=0;i<n;i++) cin>>arr[i];

cout<<"Enter the number of frames: ";
int f; cin>>f;
for (int i=0;i<f;i++) frames[i]=-1; 

int pf=0;
for (int i=0;i<n;i++){

if (check(frames,f,arr[i])){

for (int j=0;j<f; j++)
cout<<frames[j]<<" ";

}
else{
frames[pf%f]=arr[i];
pf++;

for (int j=0;j<f; j++)
cout<<frames[j]<<" ";
cout<<"Page Fault:"<<pf;

}
cout<<endl;
}
cout<<"Total Number Page Fault = "<<pf;
return 0;
}