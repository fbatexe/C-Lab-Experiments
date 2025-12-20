// Program to take input two numbers and print it :

#include <stdio.h>

int main() {
    int num1,num2,sum;

    printf("Enter your first number :  ");
    scanf("%d",&num1);

    printf("Enter your second number :  ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("Your sum is %d", sum);

    return 0;
}
