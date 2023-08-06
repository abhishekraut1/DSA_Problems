#include <bits/stdc++.h>
using namespace std;
// fractional knapsack
bool cmp(pair<double,double> x,pair<double,double> y)
{
    return x.first/x.second >= y.first/y.second;
}
int main()
{
    int n;
    cout<<"Enter the number of items : ";
    cin>>n;
    int m;
    cin>>m;
    vector<double> val(n),weight(n);
    for(int i=0;i<n;i++)
    cin>>val[i];
    for(int i=0;i<n;i++)
    cin>>weight[i];
    vector<pair<double,double>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({val[i],weight[i]});
    }
    sort(v.begin(),v.end(),cmp);
    double total=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second<=m)
        {
            total+=v[i].first;
            m-=v[i].second;
        }
        else
        {
            total+=(v[i].first*m)/v[i].second;
            break;
        }
    }
    cout<<"max value you can get is:"<<endl;
    cout<<total<<endl;
}