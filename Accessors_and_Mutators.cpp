#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
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
    Rectangle r;
    r.setLength(12);
    r.setBreadth(10);
    cout<<r.getLength()<<nl;
    cout<<r.getBreadth()<<nl;
return 0;
}