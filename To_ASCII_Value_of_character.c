// Get an input character from the user and the give the ASCII value of the given input as the output.

#include <stdio.h>

int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    
    printf("ASCII value of %c is %d", c, c);
    return 0;
}
