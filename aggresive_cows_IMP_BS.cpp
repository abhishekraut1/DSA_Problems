#include<iostream>
using namespace std;
bool isPossibleSol(int arr[],int n,int k,int mid){
    int cowCount = 1;
    int lastPos = arr[0];;
    for(int i=0;i<n;i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = arr[i];
        } 
    }
    return false;
}
int main() {
    int arr[] = {0 ,3 ,4 ,7 ,10 ,9};
    int n = 6;
    int k = 4; //no. of cows

    // calculate search space
    int s = 0;
    int e = 0;
    int ans = -1;
    int mid  = s + (e-s)/2;
    for(int i=0;i<n;i++){
        e = max(e,arr[i]);
    }
    
    while(s<=e){
        if(isPossibleSol(arr,n,k,mid)){
            ans = mid;
            s = mid+1; //go to right part to find maximum distance
        }else{
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
    cout<<ans<<endl;
return 0;
}