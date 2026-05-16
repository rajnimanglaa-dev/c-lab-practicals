// Write a program using while loop to print the sum of first n natural numbers.

#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("enter the number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("the sum of first %d natural numbers is: %d", n, sum);

    return 0;
}