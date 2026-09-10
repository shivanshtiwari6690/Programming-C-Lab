#include <stdio.h>

int main()
{
    int day, month, year;
    int D;

    printf("Enter day : ");
    scanf("%d", &day);

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);
    
    if(year > 0)
    {
        if (month >=1 && month <=12)
        { 
            if (month == 2)
            {

            if (year % 400 == 0 || 
            (year % 4 == 0 && year % 100 != 0))
            {
                 D = 29;
            }
            else {
                 D= 28;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            D = 30;
        }
        else
        {
            D = 31;
        }
        if (day >= 1 && day <= D)
            {
                printf("Valid date.\n");
            }
            else
            {
                printf("Invalid date.\n");
            }
        }

    
    }

        

    return 0;
}