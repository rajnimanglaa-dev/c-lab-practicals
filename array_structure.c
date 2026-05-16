#include <stdio.h>

struct Student {
    int rollNo;
    char name[30];
    int age;
    int marks[3];   // array within structure
};

int main() {
    struct Student stu[5];
    int i, j;

    // Input details
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &stu[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", stu[i].name);

        printf("Enter Age: ");
        scanf("%d", &stu[i].age);

        printf("Enter 3 subject marks: ");
        for(j = 0; j < 3; j++) {
            scanf("%d", &stu[i].marks[j]);
        }
    }

    // Display details
    printf("\n\n===== Student Details =====\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", stu[i].rollNo);
        printf("Name: %s\n", stu[i].name);
        printf("Age: %d\n", stu[i].age);

        printf("Marks: ");
        for(j = 0; j < 3; j++) {
            printf("%d ", stu[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}