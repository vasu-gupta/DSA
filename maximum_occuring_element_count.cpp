// frequency of the element occuring maximum number of times
// Time: O(n ^ 2)
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

	int maxFreq = 0;

	for (int i = 0 ; i < n ; i++) {
		int freq = 0;
		for (int j = 0 ; j < n ; j++) {
			if (arr[i] == arr[j]) {
				freq = freq + 1;
			}
		}

		if (maxFreq < freq) {
			maxFreq = freq
		}
	}

	cout << maxFreq;

    return 0;
}