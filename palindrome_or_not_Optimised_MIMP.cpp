#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int hsh[26][N]; //we are making N arrays each of size 26
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;//length of string
        cin>>n;
        int q;//no of queries
        cin>>q;
        string s;
        cin>>s;
        //hashing
        for(int i=0;i<n;i++){
            hsh[s[i] - 'a'][i+1]++;
        }
        //prefix sum (1 based)
        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
            hsh[i][j] += hsh[i][j-1];
            }
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int oddCount = 0;
            for(int i=0;i<26;i++){
                int charCount = hsh[i][r] - hsh[i][l-1];
                if(charCount%2 != 0) oddCount++;
            }
            if(oddCount>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
return 0;
}












/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int hsh[N][26]; //we are making N arrays each of size 26
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;//length of string
        cin>>n;
        int q;//no of queries
        cin>>q;
        string s;
        cin>>s;
        //hashing
        for(int i=0;i<n;i++){
            hsh[i+1][s[i] - 'a']++;
        }

        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
            cout<<hsh[j][i]<<" ";
            }cout<<endl;
        }
        cout<<endl;


        //prefix sum 
        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
            hsh[j][i] += hsh[j-1][i];
            cout<<hsh[j][i]<<" ";
            }cout<<endl;
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int oddCount = 0;
            for(int i=0;i<26;i++){
                int charCount = hsh[r][i] - hsh[l-1][i];
                if(charCount%2 != 0) oddCount++;
            }
            if(oddCount>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
return 0;
}
*/