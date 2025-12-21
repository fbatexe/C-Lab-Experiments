// Program to calculate area and perimeter of the rectangle :

#include <stdio.h>

int main() {
    float length,breadth,area,perimeter;
    
    printf("Enter your length :");           // Taking length as input
    scanf("%f", &length);

    printf("Enter your breadth :");          // Taking breadth as input
    scanf("%f", &breadth);

    area = length*breadth;

    perimeter = 2 * (length+breadth);

    printf("Area of the rectangle is %.2f \n", area);
    printf("Perimeter of the rectangle is %.2f \n", perimeter);

    return 0;
}
