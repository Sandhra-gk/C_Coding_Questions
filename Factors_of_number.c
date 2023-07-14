// Find the factors of a number

#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("1");
    
    for(i=2; i<=num; i++)
    {
        if(num%i == 0)
        printf(",%d", i);
    }
    return 0;
}
