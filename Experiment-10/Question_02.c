// 2.	Write a program to apply left shift and right shift operator

#include <stdio.h>

int main() {
    int num,left,right,k;

    printf("Enter the number : "); 
    scanf("%d" , &num);

    printf("Enter the shift needed : ");
    scanf("%d" , &k);

    left = num << k;
    right = num >> k;

    printf("%d \n" , left);
    printf("%d" , right);

    return 0;
}

