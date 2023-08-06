#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){ //always pass reference
cout<<"size: "<<v.size()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main() {
    int N;
    cin>>N;
    vector<int> v[N];  //declairing array of vectors
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVec(v[i]);
    }
    // IMP
    cout<<v[0][0]<<" "<<v[0][1];
    //   NOTE:-
    //array of vectors acts like 2D array with no.of 
    //rows fixed but dynamic no. of columns
return 0;
}