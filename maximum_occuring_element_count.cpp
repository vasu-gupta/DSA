// frequency of the element occuring maximum number of times
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
    
    unordered_map<int, int> freq;
    
	int maxFreq = 0;

	for (int i = 0 ; i < n ; i++) {
        freq[arr[i]]++;
        
        maxFreq = max(maxFreq, freq[arr[i]]);
	}
    
    
	cout << maxFreq;

    return 0;
}
