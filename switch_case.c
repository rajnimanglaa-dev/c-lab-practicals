// Write the following programs using switch case statements:
//  To check that an input alphabet is vowel or consonant
//  To check whether a number is positive, negative or zero

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.\n", ch);
        break;
    default:
        printf("%c is a consonant.\n", ch);
    }

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    switch ((n > 0) - (n < 0))
    {
    case 1:
        printf("%d is a positive number.\n", n);
        break;
    case -1:
        printf("%d is a negative number.\n", n);
        break;
    default:
        printf("%d is zero.\n", n);
    }
}