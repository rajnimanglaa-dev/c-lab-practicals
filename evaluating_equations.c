// Write a program to evaluate each of the following equations.

// (i) v = u + at
// (ii) s = ut + 1/2 at^2
// (iii) T = 2*a+b^(1/2)+9c
// (iv) H = (b^2 + p^2)^(1/2)

#include<stdio.h>
#include<math.h>

int main() {
    double v,u1,a1,t1;

    printf("Enter the value of initial velocity (u): ");
    scanf("%lf",&u1);

    printf("Enter the value of acceleration (a): ");
    scanf("%lf",&a1);

    printf("Enter the value of time(t): ");
    scanf("%lf",&t1);

    v = u1 + (a1*t1);

    printf("The value of v is: %.2lf\n",v);



    double s,u2,a2,t2;

    printf("Enter the value of initial velocity (u2):");
    scanf("%lf",&u2);

    printf("Enter the value of acceleration (a2): ");
    scanf("%lf",&a2);

    printf("Enter the value of time(t2): ");
    scanf("%lf",&t2);

    s = (u2*t2) + (0.5*a2*t2*t2);
    
    printf("The value of displacement (s) is: %.2lf\n: ",s);



    double T,a3,b,c;
    printf("Enter the value of a3: ");
    scanf("%lf",&a3);

    printf("Enter the value of b: ");
    scanf("%lf",&b);

    printf("Enter the value of c: ");
    scanf("%lf",&c);

    T = 2*a3 + sqrt(b) + 9*c;
    printf("The value of T is: %.2lf\n",T);


    double H,b1,p;

    printf("Enter the value of b1: ");
    scanf("%lf",&b1);

    printf("Enter the value of p: ");
    scanf("%lf",&p);

    H = sqrt((b1*b1) + (p*p));

    printf("The value of hypotenuse (H) is: %.2lf\n",H);
    
    return 0;
}