#include <stdio.h>

float area(float r){
    return 3.14*r*r;
}

float circumference(float r){
    return 2*3.14*r;
}

int main(){
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    printf("Area of circle = %.2f\n",area(radius));
    printf("Circumference of circle = %.2f\n",circumference(radius));

    return 0;
}