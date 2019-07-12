#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int n,m; cin>>n>>m;
    int d[n][n];
    for(int i=0; i<n; ++i)
    for(int j=0; j<n; ++j)
    d[i][j] = INT_MAX;
    for(int i=0; i<n; ++i) d[i][i] = 0;


    while(m--)
    {
        int a,b,c; cin>>a>>b>>c;
        d[a-1][b-1] = c;
    }
    
    for(int k=0; k<n; ++k)
        for(int i=0; i<n;++i)
            for(int j=0; j<n; ++j)
                d[i][j] = min(d[i][k]+d[k][j], d[i][j]);

    int q; cin>>q;
    for(int i=0; i<q; ++i)
    {
        int a,b; 
        cin>>a>>b;
        if(d[a-1][b-1]==INT_MAX) cout<<-1<<'\n';
        else cout<<d[a-1][b-1]<<'\n';
    }

}

/*
INPUT
4 5
1 2 5
1 4 24
2 4 6
3 4 4
3 2 7
3
1 2
3 1
1 4


*/