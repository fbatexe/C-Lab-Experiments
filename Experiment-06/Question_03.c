// 3.	Develop a recursive function FIBO (num) that accepts an integer argument.
//   Write a C program that invokes this function to generate the Fibonacci sequence up to num. 

#include <stdio.h>

void fibonum(int n) {
    int a = 0, b = 1, c, i;
    printf("%d %d ", a, b);
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    fibonum(num);
    return 0;
}
