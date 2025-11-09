/* C CODE TO DISPLAY THE LEAP YEAR IN A GIVEN RANGE ALONG WITH THE TOTAL NUMBER : */

#include <stdio.h>
int main()
{
    int year, count = 0;

    for (year = 2004; year <= 2024; year++)
    {
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            printf ("%d is leap year\n", year);
            count ++;
        }
    }
    printf ("Total leap years = %d\n", count);
}
