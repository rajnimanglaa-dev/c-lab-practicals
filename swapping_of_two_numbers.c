// Write a program to swap two variables:
/*
a) Using a temporary variable 
b) without using temporary variable*/

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    // Using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temporary variable): a = %d, b = %d\n",a,b);

    // Resetting values for the next method
    printf("Enter two integers again: ");
    scanf("%d %d",&a,&b);

    // Without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without using temporary variable): a = %d, b = %d\n",a,b);

}