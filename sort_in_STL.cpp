#include<bits/stdc++.h>
#define nl endl
using namespace std;

// TC = O(nlog(n));
void print(int (&arr)[5],int n){
    // for each loop
    for (auto x : arr)
        cout<<x<<" ";
}

// sorting arrays
void sort1(int arr[],int n){
    // Ascending
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<nl;

    // Descending
    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<nl;
}
// sorting vectors
void sort2(vector<int> arr,int n){
    // Ascending
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<nl; 

    // Descending
    sort(arr.begin(),arr.end(),greater<int>());

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<nl;
}

// sort using struct
struct Point{
    int x;
    int y;
};
bool myCompare(Point a,Point b){
    return (a.x < b.x);
}
void sortUsingStruct(){
    Point arr[] = {{3,10},{2,8},{5,4}};
    int n = 3;
    sort(arr,arr+n,myCompare);

    for(int i=0;i<n;i++)
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    cout<<nl;
}
int main() {
    int arr[] = {8,2,5,12,77};
    int n = sizeof(arr)/sizeof(arr[0]);
    // print(arr,n);
    sort1(arr,n);
    cout<<nl;

    vector<int> v = {8,2,5,12,77};
    sort2(v,n);
    cout<<nl;
    
    sortUsingStruct();
return 0;
}