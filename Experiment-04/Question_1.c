// 1.	Declare a global variable outside 
// all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int x = 1;
int n;

void num() {
    printf("Enter the number : ");
    scanf("%d" , &n);
}

void factorial() {
    for (int i = n; i >= 1; i--) {
        x = x * i;
    }
}

int main() {
    num();
    factorial();
    printf("Factorial of %d is %d" , n, x);
    return 0;
}
