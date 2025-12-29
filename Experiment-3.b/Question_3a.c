// 3.a	WAP to generate the following set of output :

#include <stdio.h>

int main() {
    int n = 3,i,j;
    int num = 1;
    
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) { 
            printf(" %d" , num);
            num++;
        }
        printf("\n");
    }
}