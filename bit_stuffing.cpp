#include<bits/stdc++.h>
using namespace std;
void bitStuffing(int n,int arr[],int stuffed[]){
    int i,j,k;
    i=0,j=0;
    int count = 1;

    while(i<n){
        if(arr[i]==1){
            stuffed[j]=arr[i];

            for(k=i+1;k<n && arr[k]==1 && count<5;k++){
                j++;
                stuffed[j]=arr[k];
                count++;

                if(count==5){
                    j++;
                    stuffed[j]=0;
                }
                i=k;// to trace the index of arr
            }
        }
        else{
            stuffed[j]=arr[i];
        }
        i++;
        j++;
    }
    for(int l=0;l<j;l++){
            cout<<stuffed[l];
        }
}
int main() {
    int n = 9;
    int arr[20] = {1,0,1,1,1,1,1,1,0};
    int stuffed[20];
    bitStuffing(n,arr,stuffed);
return 0;
}