#include<bits/stdc++.h>
using namespace std;
void bitstuffing(int arr[],int n){
    int ct=0; int b[30];
    int i=0,j=0,k=0;
    while(i<n){
        if(arr[i]==1){
            b[j] = arr[i];
            ct++;
            for(k=i+1;arr[k]==1 && ct<=5 ;k++){
                j++;
                b[j]=arr[k];
                ct++;
                if(ct==5){
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }else{
            b[j]=arr[i];
        }
        i++;
        j++;
    }
    for(int l=0;l<j;l++) cout<<b[l];
}
int main() {
    cout<<"Enter the frame length: "<<endl;
    int n; cin>>n;
    cout<<"Enter the input frame: "<<endl;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After Stuffing the frame is: "<<endl;
    bitstuffing(arr,n);
return 0;
}