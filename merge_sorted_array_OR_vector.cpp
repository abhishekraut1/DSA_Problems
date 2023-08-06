#include<iostream>
#include<vector>
using namespace std;
void merge(int a1[],int n,int a2[],int m,int a3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a1[i] < a2[j]){
            a3[k] = a1[i];
            i++;
            k++;
        }else{
            a3[k] = a2[j];
            j++;
            k++;
        }
    }

    // copy rest elemenst of a1[]
    while(i<n){
        a3[k] = a1[i];
        k++;
        i++;
    }

    // copy rest elemenst of a2[]
    while(j<m){
        a3[k] = a2[j];
        k++;
        j++;
    }
}

void printVec(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a1[] = {1,3,5,7,9};
    int n = 5;

    int a2[] = {2,4,6};
    int m = 3;

    int a3[n+m] = {0};

    merge(a1,n,a2,m,a3);
    printVec(a3,n+m);

return 0;
}