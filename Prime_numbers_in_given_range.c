// Get the starting and ending number from the user and then print all the prime numbers within the range.

#include <stdio.h>

int main()
{
    int i, j, start, end, count;
    printf("Enter starting range: ");
    scanf("%d", &start);
    
    printf("Enter ending range: ");
    scanf("%d", &end);
    
    for(i=start; i<=end; i++)
    {
        count=0;
        for(j=1; j<i; j++)
        {
            if(i%j == 0)
            count++;
        }
        if(count == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
