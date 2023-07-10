// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include <stdio.h>
#include <stdlib.h>

int compare(const * a, const * b)
{
    return(*(int *)a - *(int *)b);
}

int main()
{
    int i,n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("K: ");
    scanf("%d", &k);
    
    qsort(arr, n, sizeof(int), compare);
    printf("%d", arr[k-1]);
    return 0;
}
