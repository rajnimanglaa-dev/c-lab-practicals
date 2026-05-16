#include <stdio.h>

// Call by Value 
void swapByValue(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside Call by Value function:\n");
    printf("a = %d, b = %d\n", a, b);
}

// Call by Reference
void swapByReference(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by Value
    swapByValue(x, y);

    printf("\nAfter Call by Value (in main):\n");
    printf("x = %d, y = %d\n", x, y);

    // Call by Reference
    swapByReference(&x, &y);

    printf("\nAfter Call by Reference:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
