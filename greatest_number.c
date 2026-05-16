//Write a program to find the greatest among three numbers using:
/*CONDITIONAL STATEMENTS*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Using if-else statements:\n");

    if(a>b && a>c){
        printf("%d is the greatest number.\n",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the greatest number.\n",b);
    }
    else{
        printf("%d is the greatest number.\n",c);
    }
    

    int a1,b1,c1,largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a1,&b1,&c1);

    printf("Using ternary operator:\n");
    
    largest = (a1>b1 && a1>c1)?a1:((b1>c1)?b1:c1);
    printf("%d is the greatest number.\n",largest);

}