// stock buy and sell
#include<bits/stdc++.h>
#define nl endl
using namespace std;

// efficient TC = O
int stockBuyAndSell_(int price[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(price[i]>price[i-1])
            profit += price[i]-price[i-1];
    }
    return profit;
}

// tc = O(n^2)
int stockBuyAndSell(int price[],int s,int e){
    if(s>=e)
        return 0;

    int profit=0;
    for(int i=s;i<e;i++){
        for(int j=i+1;j<=e;j++){
            if(price[j]>price[i]){
                int curr_profit = price[j]-price[i]
                                + stockBuyAndSell(price,s,i-1);
                                + stockBuyAndSell(price,j+1,e);
                profit = max(profit,curr_profit);
            }
        }
    }
    return profit;
}
int main() {
    int price[]={1,5,3,8,12};
    cout<<stockBuyAndSell(price,0,sizeof(price)/sizeof(price[0])-1)<<nl;
    cout<<stockBuyAndSell_(price,sizeof(price)/sizeof(price[0]));
return 0;
}