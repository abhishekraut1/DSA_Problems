#include<bits/stdc++.h>
#define nl endl
using namespace std;
class Rectangle{
    private:
        
        float width;

    public:
        Rectangle(float length){
            cout<<length*length<<endl;
        }
        float length;

        void setLength(int l){
            length = l;
        }
        void setWidth(int w){
            width = w;
        }
        float getArea(float l,float w){
            return l*w;
        }
};
class Square:Rectangle{
    public:
        Square(float length):Rectangle(length){
            cout<< length*length;
        }
};
int main() {
    Square s(6.9);
    
return 0;
}