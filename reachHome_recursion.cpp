#include<bits/stdc++.h>
using namespace std;
void reachHome(int src,int dest){
    cout<<"source: "<<src<<" destination: "<<dest<<endl;

    //base case
    if(src == dest){
        cout<<"Reached Home";
        return;
    }
    
    src++;
    //recursive call
    reachHome(src,dest);
}
int main() {
    int src = 1;
    int destination = 10;
    reachHome(src,destination);
return 0;
}