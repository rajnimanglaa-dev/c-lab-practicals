#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, result;

    printf("\n-- STRING FUNCTION MENU --\n");
        printf("1. Find Length of String (strlen)\n");
        printf("2. Concatenate Strings (strcat)\n");
        printf("3. Copy String (strcpy)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Reverse String (strrev)\n");
        printf("6. Exit\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);

                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf(" %s", str2);

                strcat(str1, str2);

                printf("Concatenated string = %s\n", str1);
                break;

            case 3:
                printf("Enter a string: ");
                scanf("%s", str1);

                strcpy(temp, str1);

                printf("Copied string = %s\n", temp);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);

                strrev(str1);

                printf("Reversed string = %s\n", str1);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}