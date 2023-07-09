// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element

#include <stdio.h>

int main()
{
    int i, n;
    printf("N: ");
    scanf("%d", &n);
    int total_sum = (n*(n+1))/2;
    int sum=0, arr[n];
    
    for(i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    printf("%d", total_sum - sum);
}
