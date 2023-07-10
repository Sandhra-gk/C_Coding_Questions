// Given two arrays X and Y of positive integers, find the number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y.

#include <stdio.h>
#include <math.h>

void CheckPair(int n, int m, int arr1[], int arr2[])
{
    int i, j, count=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(pow(arr1[j], arr2[i]) > pow(arr2[i], arr1[j]))
            count++;
        }
    }
    printf("%d", count);
    return;
}

int main()
{
    int n, m, i;
    printf("N: ");
    scanf("%d", &n);
    int arr1[n];
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("M: ");
    scanf("%d", &m);
    int arr2[m];
    
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    CheckPair(n, m, arr1, arr2);
    return;
}
