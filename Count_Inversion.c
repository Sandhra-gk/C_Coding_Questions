// Given an array of integers. Find the Inversion Count in the array. Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

#include <stdio.h>

void CountInversion(int n, int arr[])
{
    int i, count=0, j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            count++;
        }
    }
    printf("%d", count);
    return;
}

int main()
{
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    CountInversion(n, arr);
    return;
}
