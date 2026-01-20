// 1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
// Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    
    int a = 5;
    float b = 22.7;
    char c = 'A';

    int *ptrint = &a;
    float *ptrfloat = &b;
    char *ptrchar = &c;

    printf("Values of variables : -\n");
    printf("%d \n", a);
    printf("%f \n", b);
    printf("%c \n", c);

    printf("Values of pointers : \n");
    printf("%p \n" , (void*)ptrint);
    printf("%p \n" , (void*)ptrfloat);
    printf("%p \n" , (void*)ptrchar);

    return 0;
}