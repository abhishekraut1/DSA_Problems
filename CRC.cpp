#include<bits/stdc++.h>
using namespace std;
string xor1(string a,string b){
    string ans;
    for(int i=1;i<b.length();i++){
        if(a[i]==b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}

string solve(string &appdata,string &key){
     string quotient;
     string temp;
     string temp2;
     int len = key.length(); 
     for(int i=0;i<len;i++){
     temp += appdata[i];
     temp2 += '0';
     }

     while(len<appdata.length()){
         if(temp[0]=='1'){
             quotient += '1';
             temp = xor1(temp,key)+appdata[len];
         }else{
             quotient += '0';
             temp = xor1(temp2,temp)+appdata[len];
         }
        len++;
     }

     if(temp[0]=='1'){
             quotient += '1';
             temp = xor1(temp,key);
     }else{
             quotient += '0';
             temp = xor1(temp2,temp);
     }

     cout<<"quotient is: "<<quotient<<endl;

     return temp;
}

void CRC(string &data,string &key){
    string appdata=data;
    for(int i=0;i<key.length()-1;i++)
        appdata += '0';
    
    string rem = solve(appdata,key);

    cout<<"Remainder is : "<<rem<<endl;
    string ans = data + rem;
    cout<<"Codeword is : "<<ans<<endl;
}
int main() {
    cout<<"Enter the data: "<<endl;
    string data; cin>>data;
    cout<<"Enter the key: "<<endl;
    string key; cin>>key;
    
    CRC(data,key);

return 0;
}