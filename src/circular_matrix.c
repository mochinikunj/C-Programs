/******************************************************************************

        CIRCULAR MATRIX PROBLEM WITH O(n*2) TIME COMPLEXITY SOLUTION

*******************************************************************************/

#include <stdio.h>
#define N 5           // CHANGE VALUE OF INPUT "N" HERE

int main()
{
    int n=N, count=0, a[N][N], dummy;
    
    for(int i=0; i<n-i; i++) {
        if(count == n*n) 
            break; 
        
        for(int j=i; j<n-i; j++) 
            count != n*n ? (a[i][j] = ++count) : (dummy=0); 
    
        for(int j=i+1; j<n-i; j++)
             count != n*n ? (a[j][n-i-1] = ++count) : (dummy=0);
             
        for(int j=n-i-2; j>=i; j--)
            count != n*n ? (a[n-i-1][j] = ++count) : (dummy=0);
            
        for(int j=n-i-2; j>i; j--)
            count != n*n ? (a[j][i] = ++count): (dummy=0);
    }
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            printf(j == n-1 ? "%d\n" : "%d ", a[i][j]);

    return 0;
}