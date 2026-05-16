#include <stdio.h>

// Function to check Prime
int isPrime(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

// Function to check Armstrong
int isArmstrong(int n) {
    int temp = n, rem, sum = 0, digits = 0, power, i;

    // Count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while(temp != 0) {
        rem = temp % 10;

        power = 1;
        for(i = 1; i <= digits; i++) {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == n);
}

// Function to check Perfect number
int isPerfect(int n) {
    int i, sum = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime check
    if(isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is not a Prime Number.\n", num);

    // Armstrong check
    if(isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    // Perfect check
    if(isPerfect(num))
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}