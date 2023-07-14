// Get the number of people in the room as input from the user. Then calculate the maximum number of handshakes possible among that people.

#include <stdio.h>

int main()
{
    int no_of_people, i, j, n, count=0;
    printf("Enter number of people: ");
    scanf("%d", &no_of_people);
    
    for(i=1; i<=no_of_people; i++)
    {
        for(j=i+1; j<=no_of_people; j++)
        {
            count++;
        }
    }
    printf("Handshakes: %d", count);
    return 0;
}

OR

#include <stdio.h>

int main()
{
    int no_of_people, i, j, count;
    printf("Enter number of people: ");
    scanf("%d", &no_of_people);
    
    count = no_of_people*(no_of_people-1)/2;
    printf("Handshakes: %d", count);
    return 0;
}
