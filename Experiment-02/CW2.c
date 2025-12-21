// WAP a C program to Convert temperature from Celsius to Fahrenheit
//  using the formula: F = (C * 9/5) + 32 :

#include <stdio.h>

int main() {
    float c,f;

    printf("Enter temperatue in celsius :");
    scanf("%f", &c);                            // Taking input temperature as celcius.       

    f = (c * (9.0/5.0) + 32);                     // Formula to convert celsius to Fahrenheit
    printf("Your temperature in Fahrenheit : %.2f",f);
    
    return 0;

}
