#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
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
class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l=0,int b=0,int h=0){
            height=h;
            setLength(l);
            setBreadth(b);
        }
        int volume(){
            return getLength()*getBreadth()*height;
        }
        int getHeight(){
            return height;
        }
        void setHeight(int h){
            if (h<0)
                height=1;
            else
                height=h;
        }
};
int main() {
    Cuboid c(10,5,7);
    cout<<c.volume();
return 0;
}