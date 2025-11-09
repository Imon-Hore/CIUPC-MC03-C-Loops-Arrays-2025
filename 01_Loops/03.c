#include <stdio.h>

int main()
{
    int T, num, i;
    printf("Enter number of test cases: ");
    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        int last_digit = num % 10;

        // Print last digit
        printf("Last digit = %d\n", last_digit);
    }

    return 0;
}
