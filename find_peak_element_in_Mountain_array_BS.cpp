#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start<end){
    if(arr[mid+1]>arr[mid]){
        start = mid+1;
    }else{
        end = mid; //if in case mid is the peak elemnt
    }

        mid = start + (end-start)/2;
    }
return start;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<findPeak(arr)<<endl;
    }
return 0;
}