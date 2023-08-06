#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char ch[],int n){ // char s[]
    int start = 0;
    int end = n-1;
    while(start < end){ 
    swap(ch[start++],ch[end--]);
}
}

int main(){
    cout<<"Enter the string : ";
    char ch[50];
    cin>>ch;
    
    int len = getLength(ch);
    cout<<"length = "<<len<<endl;
    reverseString(ch,len);
    cout<<ch;
 return 0;
}   