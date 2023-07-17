// Find the sum of two fraction in simplified form

#include <stdio.h>

int main()
{
    int num1, den1, num2, den2, i, hcf;
    printf("Enter fraction 1: ");
    scanf("%d %d", &num1, &den1);
    printf("Enter fraction 2: ");
    scanf("%d %d", &num2, &den2);
    
    int numerator = (num1*den2) + (num2*den1);
    int denominator = den1*den2;
    
    for(i=1; i<=numerator || i<=denominator; i++)
    {
        if(numerator%i==0 && denominator%i==0)
        {
            hcf = i;
        }
    }
    int n = numerator/hcf;
    int d = denominator/hcf;
    printf("Sum of fraction = %d/%d", n, d);
    return 0;
}
