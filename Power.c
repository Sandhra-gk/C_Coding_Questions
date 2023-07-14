// Get any number as the input from user for base and exponents, then calculate the power of the number.

#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent, power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    power = pow(base, exponent);
    printf("%d", power);
    return 0;
}

OR

#include <stdio.h>

int main()
{
    int base, exponent, power=1, i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    for(i=0; i<exponent; i++)
    {
        power = power*base;
    }
    printf("%d", power);
    return 0;
}
