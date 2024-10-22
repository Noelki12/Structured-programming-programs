#include <string.h>

// Define the book structure
struct book {
    char title[30];
    char author[30];
    char ISBN[13];
    int publication_year;
    float price;
} book;

int main() {
    strcpy(book.title, "Introduction to Programming");
    strcpy(book.author, "John Smith");
    strcpy(book.ISBN, "9780131103627");
    book.publication_year = 2002;
    book.price = 49.99;

    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("ISBN: %s\n", book.ISBN);
    printf("Publication Year: %d\n", book.publication_year);
    printf("Price: $%.2f\n", book.price);

    return 0;
}