// Write a program to check a number is Armstrong or not using for loop.

#include <stdio.h>

int main()
{
    int n, original_num, rem, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    original_num = n;
    for (; original_num != 0; original_num /= 10)
    {
        rem = original_num % 10;
        result += rem * rem * rem;
    }

    if (result == n)
    {
        printf("%d is an armstrong number.", n);
    }
    else
    {
        printf("%d is not an armstrong number.", n);
    }
}