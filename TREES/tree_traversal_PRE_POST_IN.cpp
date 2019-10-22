#include<bits/stdc++.h>
#define int long long int
using namespace std;
struct n
{
    int v; 
    struct n *l,*r;
    n(int v) 
    {
        this->v = v;
        l = r = NULL;
    }
};
void pre(struct n *n)
{
    if(n==NULL) return;
    cout<<n->v<<" ";
    pre(n->l); pre(n->r);
}
void post(struct n *n)
{
    if(n==NULL) return;
    post(n->l); post(n->r);
    cout<<n->v<<" ";
}
void in(struct n *n)
{
    if(n==NULL) return;
    in(n->l); 
    cout<<n->v<<" ";
    in(n->r);
}
int32_t main()
{
    struct n *root = new n(1);
    root->l = new n(2);
    root->r = new n(3);
    root->l->l = new n(4);
    root->l->r = new n(5);
    cout<<"pre->"; pre(root); cout<<'\n';
    cout<<"post->"; post(root); cout<<'\n';
    cout<<"in->"; in(root); cout<<'\n';
    
}