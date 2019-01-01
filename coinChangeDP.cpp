#include <iostream>
using namespace std;
/* coin change problem DP */
int dp[1000000];

int ways(int c[], int m, int unit)
{
   if(unit==0)
   return 1;
   if(unit<0)
   return 0;
   if(m<=0 && unit>=1) 
   return 0;
   return ways(c, m-1 , unit) + ways(c,m , unit - c[m-1]);
    
}
int main() {
	//input
	int n;
	cin>>n;
	int c[n];
    for(int i=0; i<n; ++i)
    {
        cin>>c[i];
    }
    int unit; cin>>unit;
    int m = sizeof(c)/sizeof(c[0]);
    cout<<ways(c,m,unit);
}
/*
3
1 2 3
4

Output :
4

*/