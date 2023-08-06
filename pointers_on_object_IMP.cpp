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
    // Accessing object using pointer
    Rectangle r;// object created in stack
    Rectangle *ptr;
    ptr=&r;
    ptr->l=12; //(*ptr).l=12;
    ptr->b=10;
    cout<<ptr->perimeter()<<endl;

    //creating Dynamic pointer
    Rectangle *p=new Rectangle(); // object created in heap
    p->l=5;
    p->b=3;
    cout<<p->perimeter()<<nl;
    //In JAVA objects are always created in heap
return 0;
}