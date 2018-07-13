#include <iostream>
/* Heap Sort */
using namespace std;
    
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int left(int i){
    return 2*i;}
    
    
    int right(int i){
    return (2*i + 1);}
    
   
    // Max Heapify function recursive
    void maxHeapify(int ar[], int i, int n)
    {
        int largest;
        int l = left(i);
        int r = right(i);
        if(l<n && ar[l]>ar[i])
        largest = l;
        else 
        largest = i;
        if(r <n && ar[r]>ar[largest])
        largest = r;
        if(largest!=i)
        {
            swap(ar[i], ar[largest]);
            maxHeapify(ar , largest, n);
        }
        
    }
 // function for building the heap out of given array
	void buildMaxheap(int ar[], int n)
	{
    int s =n;
	    for(int i = s/2; i>=1; i--)
	    maxHeapify(ar, i, s);
	}
	
  // for sorting the heap 
	void heapSort(int ar[], int n)
	{
     int s =n;
	    buildMaxheap(ar, n);
	    for(int i = (s-1) ; i>=0; i--)
	    {
	        swap(ar[1], ar[i]);
	        s = s -1;
	        maxHeapify(ar, 1, s);
	    }
	}
		int main()
	{
	    int N;
	    cin>>N;
	    int ar[N];
	    for(int i =0; i<N; i++)
	    cin>>ar[i];
	    //function for heapsort
	    heapSort(ar, N);
	    
      // Sorted array
	    for(int i = 0; i<N ; i++)
	    cout<<ar[i]<<' ';
	    
	}