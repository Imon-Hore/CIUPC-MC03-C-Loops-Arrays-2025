/* C CODE TO DISPLAY THE TOTAL EVENS ABD ODDS IN A GIVEN RANGE : */

#include <stdio.h>
int main()
{
    int i, start, end, even_count = 0, odd_count = 0;

    printf ("Enter the range (start end) : ");
    scanf ("%d %d", &start, &end);

    for (i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf ("Total evens = %d\nTotal odds = %d\n", even_count, odd_count);
}
