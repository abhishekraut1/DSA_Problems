#include <bits/stdc++.h>
using namespace std;
// longest subarray having sum k

 //1) FOR ARRAY HAVING POSITIVE ITEGERS ONLY
int lenOfLongSubarr(int A[], int N, int K){
 
    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += A[j];  //calculation
        if (sum == K) {
          maxLen = max(maxLen, j-i+1);     //taking results
            j++;
        }
        else if (sum < K) {    //adjusting window
            j++;
        }
        else if (sum > K) {     //adjusting window
            while (sum > K) {
                sum -= A[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}

 //2) FOR ARRAY HAVING BOTH POSITIVE ITEGERS ONLY
 int lenOfLongSubarr2(int arr[],int n,int k){ 
    // unordered_map 'um' implemented
    // as hash table
    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++) {
 
        // accumulate sum
        sum += arr[i];
 
        // when subarray starts from index '0'
        if (sum == k)
            maxLen = i + 1;
 
        // make an entry for 'sum' if it is
        // not present in 'um'
        if (um.find(sum) == um.end())
            um[sum] = i;
 
        // check if 'sum-k' is present in 'um'
        // or not
        if (um.find(sum - k) != um.end()) {
 
            // update maxLength
            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
 
    // required maximum length
    return maxLen;
}
 
int main()
{
    int arr[] = { 10, 5, 2, 7, 1, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    cout << "Length = " << lenOfLongSubarr(arr, n, k);
    return 0;
}