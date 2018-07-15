#include <iostream>

using namespace std;


int  findmax(int ar[], int n)
{
    int i;
    int larg = 0;
    for(i =1; i<=n; i++)
        if(ar[i]>larg)
        larg = ar[i];
        
    return larg;
    
    
}
void countSort(int ar[] , int b[], int n, int k)
{
    findmax(ar,n);
    int c[k];
    for(int i = 0; i<k+1; i++)
    c[i] = 0;
    
    for(int j =1; j<=n; j++)
    c[ar[j]] = c[ar[j]] + 1;
    
    
    for(int i = 1; i<=k; i++)
    c[i] = c[i] + c[i-1];
    
    for(int j = n; j>=1; j--)
    {
        b[c[ar[j]]] = ar[j];
        c[ar[j]] = c[ar[j]] - 1;
    }
    
}



int main() {
    int i, n; cin>>n;
    int ar[n], b[n];
    for(i =1; i<=n ; i++)
    cin>>ar[i];
    
   
    int k = findmax(ar, n);
    countSort(ar, b,  n, k);
    
    for(i = 1; i<=n; i++)
    cout<<b[i]<<' ';
	
}
