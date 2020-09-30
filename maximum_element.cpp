// maximum element
// Time: O(n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int maxEle = INT_MIN;

	for (int i = 0 ; i < n ; i++) 
	{
		int a ;
		cin >> a ;

		if (maxEle < a) {
			maxEle = a;
		}
	}

	cout << maxEle;

    return 0;
}
