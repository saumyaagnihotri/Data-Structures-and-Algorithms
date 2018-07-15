#include<bits/stdc++.h>
using namespace std;
/* Quick Sort */

void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }


int partition(int ar[], int p, int r)
{
    int x = ar[r]; 
    int i = p-1;
    
    for(int j = p; j<=r-1; j++)
    {
        
        if(ar[j]<=x)
        {
            ++i;
            swap(ar[i], ar[j]);
        }
    }
    
    swap(ar[i+1], ar[r]);
//    cout<<"pivot:"<<ar[i+1]<<'\n';
    return i+1;
}



void quickSort(int ar[], int p, int r)
{
    
    if(p<r)
    {
        int q = partition(ar, p, r);
        quickSort(ar, p, q-1);
        quickSort(ar, q+1, r);
    }
}


int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    cin>>ar[i];
    // QUICKSORT
    quickSort(ar, 0, n-1 );
    
    for(int i =0;i <n; i++)
    cout<<ar[i]<<' ';
}
