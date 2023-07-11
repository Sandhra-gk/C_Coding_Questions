// Given the first 2 terms A1 and A2 of an Arithmetic Series.Find the Nth term of the series. 

#include <stdio.h>

int main()
{
    int a1, a2, n;
    scanf("%d %d %d", &a1, &a2, &n);
    
    int d = a2 - a1;
    int nth_term = a1 + (n-1)*d;
    printf("%d", nth_term);
    return 0;
}
