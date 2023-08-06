#include<bits/stdc++.h>
using namespace std;
// Generate numbers with given digits {5,6} in increasing order
    void solve(vector<int>nums,vector<int>&v,int n)
    {
        queue<int>q;
        q.push(nums[0]);
        q.push(nums[1]);

        for(int i=0;i<n;i++)
        {
            int a = q.front()*10 + 5;
            int b = q.front()*10 + 6;

            q.push(a);

            q.push(b);

            v.push_back(q.front());
            q.pop();
        }
    }
int main() {
    vector<int> v;
    solve({5,6},v,10);

    for(int x:v)
    cout<<x<<" ";
return 0;
}