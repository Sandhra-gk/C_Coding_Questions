//Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

#include <stdio.h>

void checkTriplets(int arr[], int n)
{
    int count=0;
    int i, j, k;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(arr[k]==arr[i]+arr[j])
                {
                    printf("%d %d", arr[i], arr[j]);
                    count++;
                }
            }
        }
    }
    printf("There are %d triplets in this array", count);
}

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    checkTriplets(arr, n);
    return 0;
}
