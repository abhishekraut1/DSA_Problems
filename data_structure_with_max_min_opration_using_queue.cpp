#include<bits/stdc++.h>
using namespace std;
// data structure with max min opration using queue
class DS
{
    private:
        deque<int>dq;
        int max=INT_MIN;
        int min=INT_MAX;
    public:
        int getMin()
        {
            return min;
        }
        int getMax()
        {
            return max;
        }
        void insertMax(int x)
        {
            if(x>max)
            {
                dq.push_back(x);
                max = x;
            }
        }
        void insertMin(int x)
        {
            if(x<min)
            {
                dq.push_front(x);
                min = x;
            }
        }
};

int main() {
    DS a;
    a.insertMin(5);
    a.insertMax(10);
    a.insertMin(3);
    a.insertMax(15);
    a.insertMin(2);
    cout<<a.getMin()<<endl;
    cout<<a.getMax()<<endl;
    a.insertMin(1);
    cout<<a.getMin()<<endl;
    a.insertMax(20);
    cout<<a.getMax()<<endl;
    a.insertMax(19);
    cout<<a.getMax()<<endl;
return 0;
}