// 1.	Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>

int main() {
    int a , b;

    printf("Enter a and b respectively : ");
    scanf("%d %d" , &a , &b);

    printf("a AND b = %d \n" , a & b);
    
    printf("a OR b = %d \n" , a | b);
    
    printf("~a = %d \n" , ~a);
    printf("~b = %d \n" , ~b);

    
    return 0;
}