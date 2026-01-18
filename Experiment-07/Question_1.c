// 1.	Write a C program that uses functions to perform the following operations: 
// a.	Reading a complex number. 
// b.	Writing a complex number. 
// c.	Addition and subtraction of two complex numbers 

#include <stdio.h>

struct Complex {
    float real, imag;
};

struct Complex read() {
    struct Complex c;
    printf("Enter real and imaginary parts : ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void write(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex s;
    s.real = a.real + b.real;
    s.imag = a.imag + b.imag;
    return s;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex s;
    s.real = a.real - b.real;
    s.imag = a.imag - b.imag;
    return s;
}

int main() {
    struct Complex x, y, sum, diff;
    x = read();
    y = read();
    sum = add(x, y);
    diff = sub(x, y);
    printf("Addition : ");
    write(sum);
    printf("Subtraction : ");
    write(diff);
    return 0;
}
