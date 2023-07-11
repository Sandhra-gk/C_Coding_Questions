// Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.

#include <stdio.h>

void Check_missing(int arr[], int n)
{
    int i,j, k=0, l=0, m=0, count;
    for(i=1; i<=n; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            if(arr[j] == i)
            count++;
        }
        if(count == 0)
        k = k+i;
        else if(count == 2)
        l = l+i;
        else
        m = m+1;
    }
    printf("%d %d", l, k);
    return;
}

int main()
{
    int i, n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Check_missing(arr, n);
    return 0;
}
