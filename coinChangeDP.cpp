#include <iostream>
using namespace std;
/* coin change problem DP */
int ways(int c[], int m, int unit)
{
   
   int i,j,x,y;
   int table[unit+1][m];
   for(i=0;i<m;++i)
   table[0][i] =1;
   for(i=1;i<unit+1;++i)
   {
       for(j=0;j<m;++j)
       {
           x = (i-c[j]>=0)?table[i-c[j]][j] : 0; //including c[j]
           y = (j>=1)?table[i][j-1] : 0; // excluding c[j]
           table[i][j] = x + y;
        }
   }
   return table[unit][m-1];
    
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