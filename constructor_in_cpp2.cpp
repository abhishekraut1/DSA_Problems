#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
      /*Rectangle(){
            this->length=1;
            this->breadth=1;
        }*/
        Rectangle(int l=0,int b=0){
            length=l;
            breadth=b;
        }
        void setLength(int l){
            if(l<0)
                length=1;
            else
                length=l;
        }
        void setBreadth(int b){
            if (b<0)
                breadth=1;
            else
                breadth=b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
};
int main() {
    Rectangle r(10,5);
    cout<<r.getLength()<<nl;
    cout<<r.getBreadth()<<nl;
return 0;
}