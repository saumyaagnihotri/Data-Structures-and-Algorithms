#include <bits/stdc++.h>
using namespace std;
#define n 1000
/* BFS */
void label(vector<int> v[],int a, int n1)
{
    vector<bool> visited(n,0);
    queue<int> Q;
    Q.push(a);
    visited[a] = true;
    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for(int i=0; i<v[x].size(); i++)
        {
            if(visited[v[x][i]]) continue;
            Q.push(v[x][i]);
            visited[v[x][i]] = 1;
            cout<<v[x][i]<<" ";
        }
    }
   
} 
int main() {
	int n1;
	cin>>n1;
	vector<int> v[n];
	for(int i=0; i<n1-1; ++i)
	{
	    int a,b;
	    cin>>a>>b;
	    v[a].push_back(b);
	}
    label(v,1,n1);
}
/*
6
1 2
1 3
1 4
2 5
2 6


Output :
2 3 4 5 6 


*/
