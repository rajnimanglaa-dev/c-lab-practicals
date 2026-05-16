/*to perform addition, subtraction, division and
multiplication of two numbers given as input*/

#include<stdio.h>
int main() {

    float a,b;
    printf("Enter the values: ");
    scanf("%f %f",&a,&b);

    float sum = a+b;
    float differnce = a-b;
    float multiplication = a*b;
    float division = a/b;

    printf("Sum is: %.2f\n",sum);
    printf("Difference is: %.2f\n",differnce);
    printf("Multiplication is: %.2f\n",multiplication);
    printf("Division is: %.2f\n",division);

    return 0;
}