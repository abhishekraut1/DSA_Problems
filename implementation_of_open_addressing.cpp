#include<bits/stdc++.h>
#define nl endl
using namespace std;
// -1 ---> empty
// -2 ---> deleted
class Hash{
    int cap,size;
    int *arr;

public:
    Hash(int c);
    int hash(int key){
        return key%cap;
    }
    bool insert(int key);
    bool search(int key);
    bool delete_(int key);
    void display();
};

Hash::Hash(int c){
        cap=c;
        arr = new int[c];
        for(int i=0;i<c;i++){
            arr[i]=-1;
        }
}
bool Hash::insert(int key){
    if(size==cap)
        return false;

    int i=hash(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
        i=hash(i+1);
    }
    if(arr[i]==key)
        return false;
    else{
        arr[i]=key;
        size++;
        return true;
    }
}
bool Hash::search(int key){
    int i=hash(key);
    int h=hash(key);
    while(arr[i]!=-1){
        if(arr[i]==key)
            return true;
        
        i=hash(i+1);

        if(i==h)
            return false;
    }
    return false;
}
bool Hash::delete_(int key){
    int i=hash(key);
    int h=hash(key);
    while(arr[i]!=-1){
        if(arr[i]==key){
            arr[i]=-2;
            return true;
        }

        i=hash(i+1);

        if(i==h)
            return false;        
    }
    return false;
}
void Hash::display(){
    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
    Hash h(7);
	h.insert(7);
	h.insert(49);
	h.insert(56);
	h.insert(72);
	h.insert(8);

    h.display();

    if(h.search(7)==true)
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;

	h.delete_(8);

	if(h.search(8)==true)
	    cout<<"Yes"<<endl;
	else
	    cout<<"No"<<endl;
    
    h.display();
} 
