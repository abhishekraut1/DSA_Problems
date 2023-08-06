#include<bits/stdc++.h>
using namespace std;
class Stack
{
    private:
        queue<int>q;
    public:
        int top()
        {
            return q.front();
        }
        
        void push(int x)
        {
            queue<int>q2;
            while(!q.empty())
            {
                q2.push(q.front());
                q.pop();
            }
            q.push(x);
            while(!q2.empty())
            {
                q.push(q2.front());
                q2.pop();
            }
        }

        int pop()
        {
            int t=q.front();
            q.pop();
            return t;
        }        

        int size()
        {
            return q.size();
        }
};
int main() {
    Stack qi;
    qi.push(10);
    qi.push(20);
    qi.push(30);

    cout<<qi.size()<<endl;
    cout<<qi.top()<<endl;
    qi.pop();
    cout<<qi.top()<<endl;


return 0;
}