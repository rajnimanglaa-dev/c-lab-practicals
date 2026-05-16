// Write a program to print the following patterns:
/*
(A)
*
* *
* * *
* * * *
* * * * *
* * * * * *
*/

/*

(B)
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int i, j, n;
    printf("enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}