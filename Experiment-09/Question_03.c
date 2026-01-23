// 3. Open a file, read its content line by line, and display each line on the console.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("abc.txt", "r");

    if (fp == NULL) {
        printf("Not able to open file \n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
