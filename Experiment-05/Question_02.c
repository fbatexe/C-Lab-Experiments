// 2.	WAP to read a list of integers and store it in a single dimensional array.
//    Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>

int main() {
    int num, i;
    int positive = 0, negative = 0, zero = 0;
    int even = 0, odd = 0;

    printf("Enter number of elements y: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements : ", num);
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < num; i++) {
        if (arr[i] > 0) positive++;
        else if (arr[i] < 0) negative++;
        else zero++;

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("\nPositive numbers = %d: ", positive);
    for (i = 0; i < num; i++) if (arr[i] > 0) printf("%d ", arr[i]);
    
    printf("\nNegative numbers = %d: ", negative);
    for (i = 0; i < num; i++) if (arr[i] < 0) printf("%d ", arr[i]);
    
    printf("\nZeroes = %d: ", zero);
    for (i = 0; i < num; i++) if (arr[i] == 0) printf("%d ", arr[i]);
    
    printf("\nEven numbers = %d: ", even);
    for (i = 0; i < num; i++) if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    
    printf("\nOdd numbers = %d: ", odd);
    for (i = 0; i < num; i++) if (arr[i] % 2 != 0) printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
