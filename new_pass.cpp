#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
// Abhishek Raut
int main() {
ll t;
cin>>t; 
ll cs=1;
while(t--){
    ll n; cin>>n;
    string s; cin>>s;
    bool up=false,lo=false,dig=false,sp=false;
    ll i=0; 

    if(n>=7){
        for(i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){ up=true;}
            else if(s[i]>='a' && s[i]<='z'){ lo=true;}
            else if(s[i]>='0' && s[i]<='9'){ dig=true;}
            else if(s[i]=='@' || s[i]=='#' || s[i]=='*' || s[i]=='&'){ sp=true;}
        }

        if(up==false){
                s.push_back('A');
                up=true;
            }if(lo==false){
                s.push_back('a');
                lo=true;
            }if(dig==false){
                s.push_back('1');
                dig=true;
            }if(sp==false){
                s.push_back('@');
                sp=true;
            }

        if(s.length()<7){
        while(s.length()<7){
             s+="1";
        }
        }
    }
    cout<<"Case #"<<cs<<": "<<s<<endl;
    cs++;
}
return 0;
}




