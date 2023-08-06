#include<bits/stdc++.h>
using namespace std;
int main() {
    /*

    // C-Style strings
    // char str[]={'g','f','g','\0'};

    char str[]="gfg";
    cout<<str<<endl;
    cout<<sizeof(str)<<endl;

    // strcmp()
    char s1[]="abc";
    char s2[]="bcd";
    int res=strcmp(s1,s2);
    if(res>0)
        cout << "s1 greater than s2"<<endl;
    else if(res<0)
        cout << "s1 smaller than s2"<<endl;
    else if(res == 0)
        cout << "Same"<<endl;

    //strcpy()
    char s3[5];
    strcpy(s3,"abhi");
    cout<<s3<<endl;

    */

    // C++ Style strings
    string str="geeksforgeeks";
    str = str + "xyz";
    cout << str.length() <<endl;
    cout << str << " "<<endl;
    // str.substr()
    cout << str.substr(5, 3) <<endl;
    // str.find()
    cout << str.find("eek") <<endl;

    char s1[] = "abc";
    char s2[] = "bcd";
    if (s1 == s2)
        cout << "Same"<<endl;
    else if(s1 < s2)
        cout << "Smaller"<<endl;
    else
        cout << "Greater"<<endl;

    // getline()
    string s;
    getline(cin,s);
    // getline(cin,s,'a'); //--> stop accepting input at char 'a' 
    cout<<s<<endl;
return 0;
}