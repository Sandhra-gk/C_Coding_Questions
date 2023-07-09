//Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

#include <stdio.h>

void CheckSubArray(int arr[], int n, int sum)
{
    int i, presentSum, j;
    for(i=0; i<n; i++)
    {
        presentSum = arr[i];
        if(presentSum == sum)
        {
            printf("Sum at index %d", i);
            return;
        }
        else
        {
            for(j=i+1; j<n; j++)
            {
                presentSum = presentSum + arr[j];
                if(presentSum == sum)
                {
                    printf("Sum from index %d to %d", i, j);
                    return;
                }
            }
        }
    }
}

int main()
{
    int n, i, sum;
    printf("N: ");
    scanf("N: %d", &n);
    
    printf("Sum: ");
    scanf("%d", &sum);
    
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    CheckSubArray(arr, n, sum);
    return 0;
}
