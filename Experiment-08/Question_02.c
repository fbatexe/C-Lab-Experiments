// 2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types.
//  Observe how the memory addresses change and the effects on data access.

#include <stdio.h>

int main() {
    int a[3] = {40, 50, 100};
    char b[3] = {'a', 'b', 'c'};
    double c[3] = {9.4, 8.8, 4.5};

    int *p1 = a;
    char *p2 = b;
    double *p3 = c;

    printf("Initial Address and values: \n");
    printf("%p , %d\n" , (void*)p1,*p1);
    printf("%p , %c\n" , (void*)p2,*p2);
    printf("%p , %.1f\n" , (void*)p3,*p3);

    p1++;p2++;p3++;
    printf("After increment : \n");
    printf("%p , %d\n" , (void*)p1,*p1);
    printf("%p , %c\n" , (void*)p2,*p2);
    printf("%p , %.1f\n" , (void*)p3,*p3);

    p1--;p2--;p3--;
    printf("After decrement : \n");
    printf("%p , %d\n" , (void*)p1,*p1);
    printf("%p , %c\n" , (void*)p2,*p2);
    printf("%p , %.1f\n" , (void*)p3,*p3);

    return 0;
}
