#include <bits/stdc++.h>
using namespace std;

// The stock span problem is a financial problem where we have a 
// series of n daily price quotes for a stock and we 
// need to calculate the span of stocks price for all n days. 
// The span Si of the stocks price on a given day i is defined as the 
// maximum number of consecutive days just before the given day, 
// for which the price of the stock on the current day is less than or equal to its price on the given day.
// For example, if an array of 7 days prices is given as 
// {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

void printSpan(int arr[],int n){
    
    stack<int> s ;
    s.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printSpan(arr,n);
    return 0; 
}
