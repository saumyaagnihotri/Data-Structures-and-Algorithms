#include <bitstdc++.h>
using namespace std;
typedef pair<int, int> pair2;

struct Graph
{
    int V,E;
    vector<pair<int, pair2>> edges;
    
    Graph(int V, int E)
    {
        this->V = V;
        this->E =E;
        
    }
    
    void addedges(int u, int v, int w)
    {
        edges.push_back({w,{u,v}});
    }
    int kruskalMST();
};
