// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include <stdio.h>

void Check_Majority_Element(int arr[], int n)
{
    int i, j, count, need_count=n/2, min, l=0;
    for(i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            count++;
        }
        if(count>need_count && count>min)
        {
        min = count;
        l = arr[i];
        }
            if(min == 0)
            printf("-1");
            else
            printf("%d", l);
            return;
    }
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
    
    Check_Majority_Element(arr, n);
    return 0;
}
