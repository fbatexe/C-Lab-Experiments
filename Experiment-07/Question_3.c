// 3.Create a Book structure containing book_id, title, author name and price. 
//   Write a C program to pass a structure as a function argument and print the book details.

#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void display(struct Book b) {
    printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.id, b.title, b.author, b.price);
}

int main() {
    struct Book b;
    printf("Enter book id, title, author, price: ");
    scanf("%d %s %s %f", &b.id, b.title, b.author, &b.price);
    display(b);
    return 0;
}
