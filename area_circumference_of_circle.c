/* to calculate the area and the circumference of a
circle by using radius as the input */

#include <stdio.h>

int main()
{

    const float Pi = 3.14;
    float radius;
    printf("Enter the value of Radius: ");
    scanf("%f", &radius);

    float Area = Pi * radius * radius;
    float circumference = 2 * Pi * radius;

    printf("Area of circle is: %f\n", Area);
    printf("Circumference of circle is: %f\n", circumference);
    return 0;
}