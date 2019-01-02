#include <iostream>
#define NIL -1
#define MAX 100
using namespace std;

int lookup[MAX];

void _initialize()
{
    int i;
    for(i =0; i<MAX; ++i) lookup[i] = NIL;
}

int fib(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
        lookup[n] = n;
        else
        lookup[n] =  fib(n-1) + fib(n-2);
    }
    
    return lookup[n];
}

int main() {
    int n = 9; 
    _initialize(); 
    cout<<fib(n);
    return 0; 
}

	