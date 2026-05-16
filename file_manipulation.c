#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], search[20], replace[20];
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter word to search: ");
    gets(search);

    printf("Enter replacement word: ");
    gets(replace);

    char *pos = strstr(str, search);

    while(pos != NULL)
    {
        count++;

        for(i = 0; replace[i] != '\0'; i++)
        {
            pos[i] = replace[i];
        }

        pos = strstr(pos + 1, search);
    }

    printf("Updated String: %s\n", str);
    printf("Total Occurrences: %d", count);

    return 0;
}