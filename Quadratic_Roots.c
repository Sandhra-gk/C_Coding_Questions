// Get the values of a, b and c (coefficients of quadratic equation) as input from the user and calculate the roots and print as the output.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    
    float value = sqrt(pow(b,2)-(4*a*c));
    float root_1 = (-b+value)/(2*a);
    float root_2 = (-b-value)/(2*a);
    printf("Root 1 = %f, Root 2 = %f", root_1, root_2);
    return 0;
}
