// maximum element
// Time: O(n)
// Space: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}

	int maxEle = INT_MIN;

	for (int i = 0 ; i < n ; i++) {
		if (maxEle < arr[i]) {
			maxEle = arr[i];
		}
	}

	cout << maxEle;

    return 0;
}
