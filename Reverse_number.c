// Get an input from the user and the print the reverse of the given number as the output

#include <stdio.h>

int main()
{
    int num, rev=0, rem;
    printf("Enter number: ");
    scanf("%d", &num);

    while(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    
    printf("%d", rev);
    return 0;
}
