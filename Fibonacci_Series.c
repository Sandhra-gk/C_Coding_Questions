// Find the fibonacci series

#include <stdio.h>

int main()
{
    int first = 0, second = 1, i, next, input;
    printf("Enter number: ");
    scanf("%d", &input);
    
    if(input == 1)
    printf("%d", first);
    else if(input == 2)
    printf("%d,%d", first, second);
    else
    {
        printf("%d,%d", first, second);
        for(i=0; i<input-2; i++)
        {
            next = first+second;
            printf(",%d", next);
            first = second;
            second = next;
        }
    }
    return 0;
}
