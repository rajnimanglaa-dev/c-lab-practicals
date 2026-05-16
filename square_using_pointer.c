#include <stdio.h>

// Function to calculate square using pointer
void findSquare(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before function call: %d\n", num);

    findSquare(&num);   // passing address

    printf("After function call (square): %d\n", num);

    return 0;
}