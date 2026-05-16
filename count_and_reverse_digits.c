// Write a program to count the digits in a number and then print the reverse of the number also

#include <stdio.h>
int main() {
    int n, count = 0, reverse = 0, rem;
    printf("Enter an integer: ");
    scanf("%d",&n);

    for(int temp = n; temp != 0; temp /=10) {
        rem = temp % 10;
        count++;
        reverse = reverse * 10 + rem;
    }

    printf("Number of digits in %d is %d.\n",n,count);
    printf("Reverse of %d is %d.",n,reverse);
}