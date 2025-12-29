// WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered:

#include <stdio.h>

int main() {
    int num , j , n;
    int positive=0,negative=0,zero=0;

    printf("Enter numbers you want to enter : ");
    scanf("%d" , &num);
    
    for (j = 0; j < num; j++) {
        printf("Enter the number : ");
        scanf("%d" , &n);

        if (n > 0)
            positive++;
        else if (n < 0)
            negative++;
        else 
            zero++;        
    }
    printf("No. of Positive Numbers = %d \n" , positive);
    printf("No. of Negative Numbers = %d \n" , negative);
    printf("No. of Zeros = %d \n" , zero);
    return 0;
}