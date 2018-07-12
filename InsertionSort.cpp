#include <iostream>
/* Insertion Sort */

using namespace std;

int main()
{
    int n, i, j, key;
    cin>>n;
    int ar[n];
    for(i =0; i<n;i++)
    cin>>ar[i];
    // Insertion sort
    for(int j =1; j<=n; j++)
    {
    int key = ar[j];
    i = j-1;
    while(ar[i]>key&&i>=0)
    {
        ar[i+1] = ar[i];
        i--;
    }
    ar[i+1] = key;
    }
    for(i =0;i<n;i++)
    cout<<ar[i]<<' ';
}