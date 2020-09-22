#include <stdio.h>

#define N 3

int main(void) {

    int a[2*N+1][2*N+1];

    for(int i=0; i<2*N+1; i++) 
        for(int j=0; j<2*N+1; j++) 
            a[i][j] = i==0 || j==0 || i==2*N || j==2*N || (i%2==0 && j<=i) || (j%2==0 && i<=j) ? '*': ' ';

    for(int i=0; i<2*N+1; i++) {
        for(int j=0; j<2*N+1; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}