#include<bits/stdc++.h>
using namespace std;
struct Edge //3
{
    int src,dest;
};


struct Graph    //2
{
    int V,E;
    struct Edge* edge;
};
struct Graph* createGraph(int V, int E) //4
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*)malloc(sizeof(struct Edge));
    return graph;
}
//8
int find(int parent[],int i) //recursive 
{
    if(parent[i]==-1)
        return i;
    return find(parent, parent[i]);
}
//9
void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    if(xset!=yset){
        parent[xset] = yset;
    }
}
//7
int isCycle(struct Graph* graph)
{
    int *parent = (int*)malloc(graph->V*sizeof(int));
    memset(parent,-1,sizeof(int)*graph->V); //memset ==> assigns -1 to all cell of parent
    for(int i=0;i<graph->E; ++i)
    {
        int x = find(parent,graph->edge[i].src);
        int y = find(parent,graph->edge[i].dest);
        if(x==y) return 1;
        Union(parent,x,y);
        
    }
    return 0;
}
int main()
{
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V,E); //1
    
    graph->edge[0].src = 0;   //5
    graph->edge[0].dest = 1;
    
    graph->edge[1].src=1;
    graph->edge[1].dest=2;
    
    graph->edge[2].src =0;
    graph->edge[2].dest = 2;
    
    
    
    if(isCycle(graph))  //6
    cout<<"graph contains cycle";
    else cout<<"graph doesn't contain cycle";
    
    
}