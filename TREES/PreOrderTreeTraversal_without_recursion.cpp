#include<bits/stdc++.h>
#define int long long int
using namespace std;
struct n
{
    int data;
    struct n *l,*r;
    n(int data)
    {
        this->data = data;
        l = r = NULL;
    }
};
void inorder(struct n *root)
{
    stack<n *> s;
    n *curr = root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr); curr = curr->l;
        }
        curr = s.top(); s.pop();
        cout<<curr->data<<" ";
        curr = curr->r;
    }
}
int32_t main()
{
    struct n *root = new n(1);
    root->l = new n(2);
    root->r = new n(3);
    root->l->l = new n(4);
    root->l->r = new n(5);
    inorder(root);
}