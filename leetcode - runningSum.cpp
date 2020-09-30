// leetcode - Running sum of 1D array
// Time : O(n ^ 2)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);

    ans[0] = nums[0];

    for (int i = 1 ; i < n ; i++) {
        ans[i] = nums[i] + ans[i - 1];
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