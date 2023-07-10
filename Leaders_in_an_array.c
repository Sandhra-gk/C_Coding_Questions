// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

#include <stdio.h>

void Check_Leaders(int arr[], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        int count=0;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
        if(count == n-i-1)
        printf("%d ", arr[i]);
    }
    return;
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
    Check_Leaders(arr, n);
    return 0;
}
