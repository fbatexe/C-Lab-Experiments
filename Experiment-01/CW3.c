// Program to take input name and age :

#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("Enter your name : ");
    scanf("%s", &name);

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Your name and age are : %s %d \n", name, age);
    
    return 0;
}