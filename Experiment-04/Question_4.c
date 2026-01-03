// 4.Declare a static local variable inside a function. Observe how its value persists across function calls:

#include <stdio.h>

void multiply() {
    static int x = 1;  
    int factor = 2;          

    x *= factor;       
    printf("After multiplication : %d\n", x);
}

int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    printf("Multiplying 2 %d times: \n" , n);
    for (int i = 0; i < 5; i++) {
        multiply();
    }
    return 0;
}

