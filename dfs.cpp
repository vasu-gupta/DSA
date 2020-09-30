
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll nCr(ll n, ll r) {
    ll res = 1;
    if (r > n - r) {
        r = n - r;
    }
    for(int i=0;i<r;i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(),a.end());
	map<int,int> mp;
	for(auto x: a) mp[x]++;
	int mx = -1;
	for(auto x: mp) mx = max(mx,x.second);
	cout << mx << endl;
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        

        while (t--)
            solve();
        return 0;
}





