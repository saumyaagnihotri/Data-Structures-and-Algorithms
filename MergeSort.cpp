#include <bits/stdc++.h>
/* Merge Sort */


using namespace std;

void merge(int ar[], int p, int q, int r)
{
    int i, j, k;
    int n1 = q -p + 1;
    int n2 = r -q ;
    int L[n1], R[n2];
    for(i =0; i<n1; i++)
    L[i] = ar[p + i];
    for(i =0; i<n2; i++)
    R[i] = ar[q+1+i];
    i = 0;
    j =0;
    L[n1] = INT_MAX;
    R[n2] =INT_MAX;
    for(k = p; k<= r; k++)
    {
        if(L[i]<=R[j])
        {
            ar[k] = L[i];
            i++;
        }
        else 
        {
            ar[k] = R[j];
            j++;
        }
    }
    
}


void mergeSort(int ar[], int p, int r)
{
    if(p<r)
    {
        int q =(p+r)/2;
        mergeSort(ar, p, q);
        mergeSort(ar, q+1 , r);
        merge(ar, p, q, r);
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, key;
    cin>>n;
    int ar[n];
    for(i =0; i<n;i++)
    cin>>ar[i];
    
    mergeSort(ar, 0, n-1);
    for(i=0; i<n;i++)
    cout<<ar[i]<<' ';
}
