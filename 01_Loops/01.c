/* C CODE TO PRINT THE MULTIPLICATION TABLE OF A NUMBER : */
#include<stdio.h>
int main()
{
    int number, i;
    printf ("Enter the number : ");
    scanf ("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        printf ("%d * %d = %d\n", number, i, number*i);
    }
    return 0;
}





