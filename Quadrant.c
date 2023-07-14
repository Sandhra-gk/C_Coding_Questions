// Get the value of x and y coordinates as input from the user and check in which quadrant the point lies and print it.

#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter x-coordinate: ");
    scanf("%d", &x);
    
    printf("Enter y-coordinate: ");
    scanf("%d", &y);
    
    if(x>0 && y>0)
    printf("1st Quadrant");
    else if(x<0 && y>0)
    printf("2nd Quadrant");
    else if(x<0 && y<0)
    printf("3rd Quadrant");
    else if(x>0 && y<0)
    printf("4th Quadrant");
    else
    printf("The coordinate lies at orgin");
    return 0;
}
