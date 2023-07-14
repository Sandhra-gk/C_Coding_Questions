// Get the input from the user and check whether that number is a perfect number or not. Perfect number is the number where sum of all the factors of that number is equal to that number.

#include <stdio.h>

int main()
{
    int i, num, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
        sum = sum+i;
    }
    if(sum == num)
    printf("Perfect number");
    else
    printf("Not a Perfect number");
    return 0;
}
