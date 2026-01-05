// 1.	WAP to read a list of integers and store it in a single dimensional array.
//  Write a C program to print the second largest integer in a list of integers

#include <stdio.h>

int main() {
    int num, i;
    int max, second;

    printf("Enter number of elements : ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Need at least two elements!");
        return 0;
    }

    int arr[num];

    printf("Enter the elements :");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        max = arr[0];
        second = arr[1];
    } else {
        max = arr[1];
        second = arr[0];
    }
    for (i = 2; i < num; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("The second largest element is: %d", second);

    return 0;
}
