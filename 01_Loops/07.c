/* 
    Marcus runs a small shop in his neighborhood. At the end of each day, he deposits his total earnings into the bank. Before doing so, he likes to count how many notes of each denomination (Tk 500, Tk 200, Tk 100, Tk 50, Tk 20, Tk 10, Tk 5, Tk 2, Tk 1) make up his total amount. He often finds this task tedious, so he wants to write a program that automatically tells him the number of each note required to make up the total amount.
*/

#include <stdio.h>

int main()
{
    int amount;
    printf("Enter total amount: ");
    scanf("%d", &amount);

    int remaining = amount;

    // Loop until remaining amount is 0
    while (remaining > 0)
    {
        if (remaining >= 500)
        {
            printf("%d note(s) of 500\n", remaining / 500);
            remaining = remaining % 500;
        }
        else if (remaining >= 200)
        {
            printf("%d note(s) of 200\n", remaining / 200);
            remaining = remaining % 200;
        }
        else if (remaining >= 100)
        {
            printf("%d note(s) of 100\n", remaining / 100);
            remaining = remaining % 100;
        }
        else if (remaining >= 50)
        {
            printf("%d note(s) of 50\n", remaining / 50);
            remaining = remaining % 50;
        }
        else if (remaining >= 20)
        {
            printf("%d note(s) of 20\n", remaining / 20);
            remaining = remaining % 20;
        }
        else if (remaining >= 10)
        {
            printf("%d note(s) of 10\n", remaining / 10);
            remaining = remaining % 10;
        }
        else if (remaining >= 5)
        {
            printf("%d note(s) of 5\n", remaining / 5);
            remaining = remaining % 5;
        }
        else if (remaining >= 2)
        {
            printf("%d note(s) of 2\n", remaining / 2);
            remaining = remaining % 2;
        }
        else if (remaining >= 1)
        {
            printf("%d note(s) of 1\n", remaining / 1);
            remaining = remaining % 1;
        }
    }

    return 0;
}
