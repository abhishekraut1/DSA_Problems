#include<bits/stdc++.h>
# define nl endl
using namespace std;
// functions inside class are inline functions
// Hence only small functions must be write in class
// and complex must be outside class using scope resolution operator
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l,int b);
        int area();// non inline
        inline int perimeter();// inline(due to inline keyword)
};
int main() {
    Rectangle r(10,5);
    cout<<r.area();
return 0;
}
Rectangle::Rectangle(int l,int b){
    this->length=l;
    this->breadth=b;
}
int Rectangle::area(){
    return this->length*this->breadth;
}
int Rectangle::perimeter(){
    return 2*(this->length+this->breadth);
}