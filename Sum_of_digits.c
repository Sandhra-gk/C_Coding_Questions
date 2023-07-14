// Find the sum of the digits of a number

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
