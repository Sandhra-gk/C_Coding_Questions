// Get an input number from the user and check whether it is a positive or negative number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter character: ");
    scanf("%d", &num);
    
    if(num>0)
    printf("Positive");
    else if(num == 0)
    printf("Neither positive nor negative");
    else
    printf("Negative");
    return 0;
}
