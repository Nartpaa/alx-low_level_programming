#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Check if n is positive, zero, or negative, and print the result */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}

