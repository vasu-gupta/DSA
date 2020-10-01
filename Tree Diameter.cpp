#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int mxN = 1e5;
int N, dia[mxN],res;
vector<int>adj[mxN];

void dfs(int u = 0, int p = -1)
{
    for(int v : adj[u])
    {
        if(v == p)
            continue;
        
        dfs(v,u);

        res = max(dia[u] + dia[v] + 1, res);
        dia[u] = max(dia[u],dia[v] + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int i = 0; i < N - 1; i++)
    {
        int x,y;
        cin>>x>>y;

        x--,y--;

        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs();

    cout<<res<<endl;

    return 0;
}