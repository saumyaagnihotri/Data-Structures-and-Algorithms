#include <iostream>
/* Bubble Sort */
using namespace std;

int main() {
	int n ;
	cin >>n;
	int ar[n];
	for (int i =0; i< n; i++)
	cin>>ar[i];
	// Bubble Sort
	for(int i = 0; i< n-1; i++)
    for(int j =0; j< n -i; j++)
    if(ar[j]>ar[j+1])
    {
        int temp =ar[j];
        ar[j] =ar[j+1];
        ar[j+1] = temp;
    }
    // Array is now sorted
    for(int i =0;i<n;i++)
    cout<<ar[i]<<' ';
}
