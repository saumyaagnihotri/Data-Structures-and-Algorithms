#include <bits/stdc++.h>
using namespace std;
void initialize( int Arr[ ], int N)
{
    for(int i = 1;i<=N;i++)
    Arr[ i ] = i ;
}
//returns true,if A and B are connected, else it will return false. 
 bool find( int Arr[], int A, int B)                           
{
if(Arr[ A ] == Arr[ B ])
return true;
else
return false;   
}
//change all entries from Arr[ A ] to Arr[ B ].
void uniony(int Arr[],int N, int A, int B)
{
    int TEMP = Arr[ A ];
for(int i = 1; i <=N;i++)
    {
    if(Arr[ i ] == TEMP)
    {
        Arr[ i ] = Arr[ B ];
    }
    }
   
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int Arr[nodes+1];
    initialize(Arr,nodes);
    for(int i=0; i<edges; ++i)
    {
        int a,b;
        cin>>a>>b;
        uniony(Arr,nodes,a,b);
        map<int,int> m;
        for(int p=1; p<=nodes; ++p)
        {
            m[Arr[p]]++;
        }
        vector<int> v;
        for(auto s: m)
        v.push_back(s.second);
        sort(v.begin(),v.end());
        for(auto s: v)
        cout<<s<<" ";
        cout<<"\n";
        
    }
}