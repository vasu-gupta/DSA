// leetcode - Running sum of 1D array
// Time : O(n ^ 2)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j <= i ; j++) {
            ans[i] += nums[j];
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    } 

    vector<int> psa = runningSum(nums);

    for (int i = 0 ; i < n ; i++) {
        cout << psa[i] << " ";
    } 

    return 0;
}