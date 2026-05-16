#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[50];
    int i, j, count = 0, found;

    printf("Enter the main string: ");
    gets(str);   // used for reading full line

    printf("Enter the substring: ");
    gets(sub);

    int len1 = strlen(str);
    int len2 = strlen(sub);

    // Traverse main string
    for(i = 0; i <= len1 - len2; i++) {
        found = 1;

        // check substring match
        for(j = 0; j < len2; j++) {
            if(str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }

        if(found == 1) {
            count++;
        }
    }

    printf("Total occurrences of substring = %d\n", count);

    return 0;
}