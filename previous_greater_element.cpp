#include <bits/stdc++.h>
using namespace std;
void printPreviousGreater(vector<int> &arr){
    stack<int> s ;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<arr.size();i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int fl=s.empty() ? -1 : s.top();
        cout<<fl<<" ";
        s.push(arr[i]);
    }
}

int main() 
{ 
    vector<int>arr={15,10,18,12,4,6,2,8};
    printPreviousGreater(arr);
    return 0; 
}