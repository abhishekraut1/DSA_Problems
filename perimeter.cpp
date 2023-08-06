#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Rectangle{
    public:
        int l;
        int b;
        int perimeter(){
            return 2*(l+b);
        }
};
int main() {
    Rectangle r;
    r.l = 12;
    r.b = 8;
    cout<<r.perimeter();
return 0;
}