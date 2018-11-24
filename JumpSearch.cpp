#include <bits/stdc++.h>
using namespace std;
/* Jump Search */
int JumpSearch(vector<int> v, int n, int key)
{
    int start=0;
    int step = sqrt(n);
    
    while(v[step-1]<=key && step<n)
    {
        start = step-1;
        step = step + sqrt(n);
        if(step>(n-1)) step = n;
    }
    
    for(int i=start; i<step; ++i)
    if(key==v[i])
    return i;
    
    return -1;
}
int main() {
	 int n;
	 cin>>n;
	 vector<int> v(n);
	 // Enter numbers in sorted order
	 for(int i=0; i<n;++i)cin>>v[i];
	 int key; cin>>key;
	 
	 if(JumpSearch(v,n,key)==-1)cout<<"Not Found!!";
	 else  cout<<JumpSearch(v,n,key)+1;
}


//Time Complexity : O(n^(0.5))