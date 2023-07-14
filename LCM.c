// Find the LCM of two numbers

#include <stdio.h>

int main()
{
    int num1, num2, max, i, lcm;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    
    if(num1 > num2)
    max = num1;
    else
    max = num2;
    
    for(i=max; i<num1*num2; i++)
    {
        if(i%num1 == 0 && i%num2 == 0)
        printf("%d", i);
        break;
    }
    return 0;
}
