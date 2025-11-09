/* C program to find prime numbers in a given range */

#include <stdio.h>

int main()
{
    int start, end, num, i, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(num = start; num <= end; num++)
    {
        if(num < 2)
            continue; // numbers less than 2 are not prime

        isPrime = 1; // assume number is prime

        // check for factors of num from 2 to num-1
        for(i = 2; i <= num-1; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0; // if num has a factor, then it's not prime
                break; // no need to check further
            }
        }

        if(isPrime == 1)
            printf("%d ", num);
    }

    return 0;
}
