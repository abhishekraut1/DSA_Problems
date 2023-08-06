#include<bits/stdc++.h>
using namespace std;

// TC = p*log(N*(10^d))
// d=eps precision
// pth root
// N = number

double eps = 1e-6; // for 5th decimal precision

// for nth root
double multiply(double mid,int n)
{
    double ans = 1;
    for(int i=1;i<=n;i++)
        ans *= mid;

    return ans;
}
int main() {
    double x;
    cin>>x;
    double s=1,e=x;
    while(e-s > eps)
    {
        double mid = s+(e-s)/2;
        if(multiply(mid,3) < x)
            s = mid;
        else
            e = mid;
    }

    cout<<s<<endl;
return 0;
}