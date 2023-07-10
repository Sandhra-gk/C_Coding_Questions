// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int i, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
