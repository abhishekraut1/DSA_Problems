#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
}

void printVec(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void addTwoArrays(vector<int> &a,vector<int> &b){
    vector<int> ans;
    int i = a.size()-1;
    int j = b.size()-1;
    int carry = 0;

    while(i>=0 && j>=0){

        int sum = a[i]+b[j]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);

        i--;
        j--;
    }
    //first case
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);

        i--;
    }

    //second case
    while(j=0){
        int sum = b[j]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);

        j--;
    }

    //third case
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
    }
    // reverse(ans.begin(), ans.end());
    reverse(ans);
    printVec(ans);
}

int main() {
    vector<int> a = {1,3,5};
    vector<int> b = {5,7,9};
    
    cout<<"Sum = ";
    addTwoArrays(a,b);

return 0;
}