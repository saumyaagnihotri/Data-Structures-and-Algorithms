#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(10005);
int visited[10005] = {0};
bool isZero (int i) 
{
    return i == 0;
}
void BFS(int s)
{
    visited[s] = 1;
    queue<int> q;
    q.push(s);
    
    while(!q.empty())
    {
        int s = q.front();
        cout<<s<<" ";
        q.pop();
        for(int i = 0; i<adj[s].size(); ++i)
        {
            if(visited[adj[s][i]]==0)
            {
                visited[adj[s][i]] = 1;
                q.push(adj[s][i]);
            }
        }
    }
}
void ConnectedComponent(vector<vector<int>> adj)
{
    int c = 0;
    for(int i=0; i<adj.size(); ++i)
    {
       for(int j=0;j<adj[i].size(); ++j)
       if(!visited[adj[i][j]])
       BFS(adj[i][j]);
       if(c!=0)
       cout<<"\n";
       c++;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    adj.resize(n);
    for(int i=0; i<adj.size(); ++i)
    adj[i].resize(n);
    
    
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        cin>>adj[a][b];
        adj[a].push_back(b);
        adj[b].push_back(a);
        
    }
    for(int i=0; i<adj.size(); ++i)
    {
       vector<int>::iterator newIter = remove_if( adj[i].begin() , adj[i].end() , isZero);
       adj[i].resize( newIter -  adj[i].begin() );
    }
    ConnectedComponent(adj);
}
/*
Input -
6 5
4 3
4 2
2 3
1 5
5 6
Output -
5 1 6 
3 4 2 
*/