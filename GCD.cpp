#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a<b)
    {
        return gcd(b,a);
    }
    if(b == 0)
    {
        return a;
    }
	return gcd(b,a%b);
    
}

int main ()
{
    int a ;
    int b ;
    cin >> a;
    cin >> b;
    
    cout << gcd(a,b);
//same as stl __gcd(a,b)
}
