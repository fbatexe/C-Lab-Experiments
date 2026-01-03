// 3.	Declare variables within different code blocks (enclosed by curly braces) 
// and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    int t = 0; 
    int num1,num2; 

    {    num1 = 10; }
    {    num2 = 20; }
    
    {   int sum = num1 + num2; 
        t = sum;  
    }

    printf("Sum of numbers = %d\n", t);
    return 0;
}
