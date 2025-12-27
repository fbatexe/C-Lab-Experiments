// Program to check triangle type and Check whether the triangle is valid or not :

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the first side :");
    scanf("%d", &side1);

    printf("Enter the second side :");
    scanf("%d", &side2);

    printf("Enter the third side :");
    scanf("%d", &side3);

    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side3 + side1 > side2))
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("Equilateral Triangle");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("Isoceles Triangle");
        }
        else if (side1 != side2 && side2 != side3 && side3 != side1)
        {
            printf("Scalene Triangle");
        }
        else
        {
            printf("ERROR : Unexpected Error");
        }
    }
    else {
        printf("ERROR : Triangle equality not satisfied");
    }
    return 0;
}