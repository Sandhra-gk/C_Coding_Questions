// Get the first and last value as input from the user, then calculate the sum within the given range.

#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    while(num>0)
    {
        sum = sum + (num%10);
        num = num/10;
    }
    printf("%d", sum);
    return 0;
}
