// Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array. 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

#include <stdio.h>

int main()
{
    int i, n, sum1=0, sum2=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(n == 1)
    {
        printf("1");
    }
    else
    {
    int j=n-1;
    for(i=0; i<n; i++)
    {
        sum1 = sum1 + arr[i];
        sum2 = sum2 + arr[j];
        if(sum1 == sum2)
        {
            printf("%d", i+2);
            return;
        }
        else
        --j;
    }
    }
    return 0;
}
