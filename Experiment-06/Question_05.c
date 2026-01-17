// 5.	Develop a function REVERSE (str) that accepts a string argument. 
//      Write a C program that invokes this function to find the reverse of a given string.

#include <stdio.h>

int main() {
    char ch[100];
    int i,len=0;

    printf("Enter the string : ");
    scanf("%s" , ch);

    for (i = 0; ch[i] != '\0'; i++) {
        len++;
    }
    for (i = len - 1; i >= 0; i--) {
        printf("%c" , ch[i]);
    }
    return 0;
}
