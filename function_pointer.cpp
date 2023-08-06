#include<bits/stdc++.h>
# define nl endl
using namespace std;
void display(){
    cout<<"display fun"<<nl;
}
int max(int x,int y){
    return x>y?x:y;
}
int min(int x,int y){
    return x<y?x:y;
}
int main() {
    void (*fp)();
    fp=display;
    (*fp)();

    int (*a)(int,int);
    a=max;
    int x = (*a)(10,9);
    cout<<x<<nl;
    a=min;
    x = (*a)(10,9);
    cout<<x<<nl;
return 0;
}