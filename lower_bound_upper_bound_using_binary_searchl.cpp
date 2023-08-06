#include<bits/stdc++.h>
using namespace std;
// lower bound and upper bound using binary search
int lowerBound(vector<int>&arr,int element)
{
    int s = 0,e = arr.size()-1;
    while(e-s > 1)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] < element){
            s = mid+1;
        }else{
            e = mid;
        }
    }

    if(arr[s] >= element)
    return s;

    if(arr[e] >= element)
    return e;
    
    return -1;
}

int upperBound(vector<int>&arr,int element)
{
    int s = 0,e = arr.size()-1;
    while(e-s > 1)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] <= element){
            s = mid+1;
        }else{
            e = mid;
        }
    }

    if(arr[s] > element)
    return s;

    if(arr[e] > element)
    return e;
    
    return -1;
}


int main() {
    vector<int> arr = {1,3,4,6,77,123,444};
    int lb = lowerBound(arr,6);
    cout<<lb<<endl;

    int ub = upperBound(arr,6);
    cout<<ub<<endl;
return 0;
}