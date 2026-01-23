// 1. Write a program to create a new file and write text into it.

#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("abc.txt", "w");

    if (fp == NULL) {
        printf("Could not create file \n");
        return 1;
    }

    fprintf(fp, "A black hole is a region in space where gravity is so strong that nothing, not even light, can escape from it ");
    fclose(fp);

    return 0;
}
