#include <bits/stdc++.h>
#define nl endl
using namespace std;
// tc=O(n^2)
int maxSubarraySumCircular(vector<int> &nums)
{
    int n = nums.size();
    int res = nums[0];
    for (int i = 0; i < n; i++)
    {
        int curr_sum = nums[i];
        int curr_max = nums[i];

        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += nums[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

// tc=O(n)
int maxSubarraySumCircular2(vector<int> &nums)
{
    // first find normal max subarryay using Kadane's algo
    int n = nums.size();
    int maxEnding = nums[0];
    int normalMaxSum = nums[0];

    for (int i = 1; i < n; i++) {
        maxEnding = max(maxEnding + nums[i], nums[i]);
        normalMaxSum = max(normalMaxSum, maxEnding);
    }

    // then find min subarray using Kadane's algo
    if(normalMaxSum<0)
        return normalMaxSum;

    int minEnding=nums[0];
    int minSum=nums[0];
    int totalSum=nums[0];

    for(int i=1;i<n;i++){
        minEnding = min(minEnding+nums[i], nums[i]);
        minSum = min(minSum,minEnding);
        totalSum += nums[i];
    }
    return max(normalMaxSum,totalSum-minSum);
}

int main()
{
    vector<int> arr = {3,-4,5,6,-8,7};
    cout << maxSubarraySumCircular(arr) << nl;
    cout << maxSubarraySumCircular2(arr) << nl;
    return 0;
}