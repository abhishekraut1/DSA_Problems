#include<bits/stdc++.h>
#define nl endl
using namespace std;
class Hash{
    int bucket;
    list<int>*table;

public:
    Hash(int b);
    void insertItem(int x);
    void deleteItem(int x);
    int hashFunction(int x){
        return x%bucket;
    }
    void displayHash();
};

Hash::Hash(int b){
    this->bucket=b;
    table = new list<int>[bucket];
}

void Hash::insertItem(int x){
    int index=hashFunction(x);
    table[index].push_back(x);
}

void Hash::deleteItem(int x){
    int index = hashFunction(x);
    list<int>:: iterator i;

    for(i=table[index].begin();i!=table[index].end();i++){
        if(*i == x)
        break;
    }

    if(i != table[index].end())
        table[index].erase(i);
}

void Hash::displayHash(){
    for(int i=0;i<bucket;i++){
        cout<<i;
        for(auto x:table[i]){
            cout<<" --> "<<x;
        }
        cout<<nl;
    }
}
int main() {
    int arr[] = {15,11,27,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    Hash h(7);
    for(int i=0;i<n;i++){
        h.insertItem(arr[i]);
    }

    h.displayHash();
    cout<<nl;
    h.deleteItem(12);

    h.displayHash();
return 0;
}