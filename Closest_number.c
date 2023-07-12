// Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

#include <stdio.h>

int main()
{
    int n, m;
    printf("N: ");
    scanf("%d", &n);
    
    printf("M: ");
    scanf("%d", &m);
    
    int division = n/m;
    int modulus = n%m;
    int division_next_p = m+(division*m);
    int division_next_n = (division*m)-m;
    
    if(n>0)
    {
        if(modulus == 0 || modulus == 1)
        {
            printf("%d", m*division);
        }
        else
        {
            printf("%d", division_next_p);
        }
    }
    else
    {
        if(modulus == 0 || modulus == 1)
        {
            printf("%d", m*division);
        }
        else
        {
            printf("%d", division_next_n);
        }
    }
    return 0;
}
