#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates for point 1 (x y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates for point 2 (x y): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates for point 3 (x y): ");
    scanf("%d %d", &x3, &y3);

    int det = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (det == 0) {
        printf("The points are collinear.");
    } else {
        printf("The points are not collinear.");
    }

    return 0;
}