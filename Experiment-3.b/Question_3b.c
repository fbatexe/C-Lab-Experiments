// 3.b	WAP to generate the following set of output :

#include <stdio.h>

int main() {
    float n = 4, num = 1;
    int i,j;

    for (i = 0; i <= n; i++) {
        
        for (j = 0; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf(" %d", (int)num);
            if(j < i)
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}