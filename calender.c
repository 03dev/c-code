#include <stdio.h>

int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char *month_name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Octuber", "November", "December"};

int day_code(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int leap_year(int year)
{
    if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
    {
        return days_in_month[1] = 29;
    }
    else
    {
        return days_in_month[1] = 28;
    }
}

void print_calender(int year)
{
    int current = day_code(1, 1, year);
    leap_year(year);
    int k;
    for (int i = 0; i < 12; i++)
    {
        printf("\n\t%s\t\n", month_name[i]);
        printf("-----------------------------------\n");
        printf(" Sun  Mon  Tue  Wed  Thus  Fri  Sat\n");
        for (k = 0; k < current; k++)
        {
            printf("     ");
        }
        for (int j = 1; j <= days_in_month[i]; j++)
        {
            printf("%5d", j);
            if (++k > 6)
            {
                printf("\n");
                k = 0;
            }
        }
        current = k;
    }
}

int main()
{
    int year;
    printf("Please enter year (Example 1999) : ");
    scanf("%d", &year);
    
    print_calender(year);
    return 0;
}