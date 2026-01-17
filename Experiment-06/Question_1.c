// 1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). 
//      Using this function, write a C program to compute the binomial coefficient.
//      Tabulate the results for different values of n and r with suitable messages

#include <stdio.h>

int factnum(int n) {
    if (n == 0)
        return 1;
    return n * factnum(n - 1);
}

int nonrecfactnum(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf(" Recursive : %d", factnum(num));
    printf("\n Non Recursive : %d", nonrecfactnum(num));
    return 0;
}
