// Check if the entered character is an alphabet or not

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    printf("Enter input: ");
    scanf("%c", &input);
    
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
    printf("Alphabet");
    else
    printf("Not an alphabet");
    return 0;
}

OR

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    printf("Enter input: ");
    scanf("%c", &input);
    
    if(isalpha(input))
    printf("Alphabet");
    else
    printf("Not an alphabet");
    return 0;
}

