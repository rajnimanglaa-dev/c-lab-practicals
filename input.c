/* Program to demonstrate input/output statements
   and block structure of a C program using stdio.h 
*/

#include<stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name); // no & needed for string

    printf("Hello! %s\n",name);

    return 0;
}