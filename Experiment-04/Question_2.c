// 2. Declare a local variable inside a function and try to access it outside the function. 
// Compare this with accessing the global variable from within the function.

#include <stdio.h>

int global = 70;

int demo() {
    int num;
    printf("Local Variable = ");
    scanf("%d" , &num);
    return num;
}

int main() {
    int local = demo();
    int sum;

    sum = local + global;

    printf("Sum of both variables = %d" , sum);
    return 0;
}
