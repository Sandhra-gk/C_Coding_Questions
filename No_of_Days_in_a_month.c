// Get the number of month and year as input from the user and check the number of days present in that month.

#include <stdio.h>

int main()
{
    int month, year;
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("No of days: ");
    
    if(((month==2) && (year%400==0)) || ((year%100!=0)&&(year%4==0)))
    printf("29");
    else if(month == 2)
    printf("28");
    else if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
    printf("31");
    else
    printf("30");
    return 0;
}
