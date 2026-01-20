// 3.	Write a function that accepts pointers as parameters.
//   Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void fox(int *m ,double *n, char *o);

void fox(int *m ,double *n, char *o) {
    *m += 10;
    *n *= 5;
    *o = 'A';
}
int main() {
    int a = 3;
    double b = 22.7;
    char c = 'm';
    
    printf("Initial values : \n");
    printf("a = %d, b = %.2f, c = %c", a, b, c);

    fox(&a,&b,&c);

    printf("\n After modification : \n");
    printf("a = %d, b = %.2f, c = %c", a, b, c);
    
    return 0;
}