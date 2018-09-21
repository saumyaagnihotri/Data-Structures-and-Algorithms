#include <iostream>
#include<math.h>
using namespace std;
/* Radix Sort */
int countdig(int ee)
{
    int count =0;
    while(ee>0)
    {
        ee =ee/10;
        count++;
    }
    return count;
}
int max(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    int d = countdig(mx);
    return d;
}
void applySort(int ar[], int n, int k)
{
    int d = pow(10,k);
    
    for(int j=1; j<n; ++j)
    {
        int key = ar[j];
        int i = j-1;
        while(i>=0 && (ar[i]/d)%10>((key/d)%10))
        {
            
            ar[i+1] = ar[i];
            i--;
        }
        ar[i+1] = key;
        
    }
    
}
void radixSort(int ar[], int n, int d)
{
    for(int i=0; i<d; i++)
    applySort(ar,n,i);
}




int main() {
	int d,n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;++i)
	cin>>ar[i];
	d = max(ar,n);
	radixSort(ar,n,d);
	for(int i=0;i<n;++i)
	cout<<ar[i]<<'\n';
}
