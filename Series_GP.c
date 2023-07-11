// Given the A and R i,e first term and common ratio of a GP series. Find the Nth term of the series.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);
    
    int d = pow(r,n-1);
    int nth_term = a*d;
    printf("%d", nth_term);
    return 0;
}
