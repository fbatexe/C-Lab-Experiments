// 2. Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. 
//    The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). 
//    Print the employees name and gross salary.

#include <stdio.h>

struct Employee {
    char name[30];
    float basic, da, gross;
};

int main() {
    struct Employee e[100];
    int i, n;
    printf("Enter no. of employees : ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter name and basic pay : ");
        scanf("%s %f", e[i].name, &e[i].basic);
        e[i].da = 0.52 * e[i].basic;
        e[i].gross = e[i].basic + e[i].da;
    }
    printf("Name  \tGross Salary \n");
    for(i=0; i<n; i++)
        printf("%s \t%.2f\n", e[i].name, e[i].gross);
    return 0;
}
