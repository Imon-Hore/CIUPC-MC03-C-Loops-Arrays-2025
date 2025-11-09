/* 
    Musfiq is 25 years old and his parents are planning to get him married. They have short-listed N girls. They wish to know who among Musfiq and each of the girls is older and by how many years. Write a program to help them.
    For example, if the age of the first girl among N girls is 22, then your program must display “Musfiq is older by 3 year(s)”. 

    Input : Read N. Then, read the age of N girls (one-by-one).
    Output : For every girl, print who is older and by how many years.
*/

#include <stdio.h>
int main()
{
    int N, i, girl_age;
    int musfiq_age = 25;

    printf("Enter number of girls: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        printf("Enter age of girl %d: ", i);
        scanf("%d", &girl_age);

        if(musfiq_age > girl_age)
            printf("Musfiq is older by %d year(s)\n", musfiq_age - girl_age);
        else if(musfiq_age < girl_age)
            printf("Girl is older by %d year(s)\n", girl_age - musfiq_age);
        else
            printf("Same age\n");
    }

    return 0;
}
