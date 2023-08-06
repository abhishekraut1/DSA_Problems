#include<iostream>
using namespace std;
/* Given an sorted array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages 
in the ‘i-th’ book. There are ‘m’ number of students and the task is to allocate all the books 
to their students. Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
*/
bool isPossibleSol(int arr[],int n,int m,int mid){
    int studentCount = 1; // starting from 1st student
    int pageSum = 0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i] <= mid){

            pageSum = pageSum+arr[i];
        }else{

            if(studentCount>m || arr[i]>mid){
                return false;
            }
            studentCount++;
            pageSum = arr[i];
        }
    }
return true;
}

int main() {
    int arr[] = {12 ,34 ,67 ,90};
    int n = 4;
    int m = 2; //no. of student
    int sum = 0;

    //calculate search space 
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<=e){
        if(isPossibleSol(arr,n,m,mid)){ //go to left part to find minimum sol
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1; //go to right part
        }
        mid = s + (e-s)/2;
    }

    cout<<ans<<endl;
return 0;
}