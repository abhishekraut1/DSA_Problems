#include<iostream>
using namespace std;
bool isPresent(int arr[][2],int target){

    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
            if(arr[row][col] == target){
                return 1;
            }
    }
    }
    return 0;
}

void sumOfRows(int arr[][2]){
    int rowIndex = -1;
    int maxi = INT_MIN;
    for(int row=0;row<2;row++){
        int sum = 0;
        for(int col=0;col<2;col++){
            sum += arr[row][col];
            
    }
    if(sum > maxi) maxi = sum; rowIndex = row;
    cout<<sum<<" ";
    }
    cout<<"And Largest sum of row is "<<maxi<<endl<<"At row index "<<rowIndex<<endl;
}

int main() {
    int arr[2][2];

    //input
    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
            cin>>arr[row][col];
    }
    }

    if(isPresent(arr,2)){
        cout<<"It is found"<<endl;
    }else{
        cout<<"It is Not found"<<endl;
    }

    sumOfRows(arr);
return 0;
}