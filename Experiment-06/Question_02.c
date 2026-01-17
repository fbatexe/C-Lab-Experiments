// 2.	Develop a recursive function GCD (num1, num2) that accepts two integer arguments.
//   Write a C program that invokes this function to find the greatest common divisor of two given integers. 

#include <stdio.h>

int gcd(int a, int b) {
    int i, h = 1;
    for (i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0)
            h = i;
    }
    return h;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d", gcd(x, y));
    return 0;
}
