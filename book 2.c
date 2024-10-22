#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    char ISBN[13];
    int publication_year;
    float price;
} book;

int main() {

    printf("Enter the title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0; 

    printf("Enter the author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0; 

    printf("Enter the ISBN: ");
    scanf("%s", book.ISBN);

    printf("Enter the publication year: ");
    scanf("%d", &book.publication_year);

    printf("Enter the price: ");
    scanf("%f", &book.price);

    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("ISBN: %s\n", book.ISBN);
    printf("Publication Year: %d\n", book.publication_year);
    printf("Price: $%.2f\n", book.price);

    return 0;
}