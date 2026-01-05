// 3.	WAP to read a list of integers and store it in a single dimensional array. 
//      Write a C program to find the frequency of a particular number in a list of integers.

#include <stdio.h>

int main() {
    int num, i, target, count = 0;

    printf("Enter number of elements : ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d elements : ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number : ");
    scanf("%d", &target);

    for (i = 0; i < num; i++) {
        if (arr[i] == target)
            count++;
    }

    printf("%d appears %d time(s)", target, count);
    return 0;
}
