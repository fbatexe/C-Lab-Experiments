// 4.	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. 
// Write a C program that invokes this function to generate prime numbers between the given ranges. 

#include <stdio.h>
#include <math.h>

int isprime(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b, i;
    printf("Enter range : ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d : ", a, b);
    for (i = a; i <= b; i++) {
        if (isprime(i))
            printf("%d ", i);
    }
    return 0;
}
