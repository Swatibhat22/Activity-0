#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int year;
} Publisher;

typedef struct {
    int id;
    char title[30];
    float price;
    Publisher pub;
} Book;

// Function to print details of all books
void printAllBooks(Book *books, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d %s %.2f %s %d\n",
               books[i].id,
               books[i].title,
               books[i].price,
               books[i].pub.name,
               books[i].pub.year);
    }
}

// Function to find the book with maximum price
Book* findMaxBook(Book *books, int n) {
    int i;
    Book *max = &books[0];

    for (i = 1; i < n; i++) {
        if (books[i].price > max->price) {
            max = &books[i];
        }
    }

    return max;
}

// Function to find the book with minimum price
Book* findMinBook(Book *books, int n) {
    int i;
    Book *min = &books[0];

    for (i = 1; i < n; i++) {
        if (books[i].price < min->price) {
            min = &books[i];
        }
    }

    return min;
}

int main() {
    int n, i;
    Book *books;
    Book *maxBook;
    Book *minBook;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    books = (Book *)malloc(n * sizeof(Book));

    if (books == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        scanf("%d", &books[i].id);
        scanf(" %[^\n]", books[i].title);
        scanf("%f", &books[i].price);
        scanf(" %[^\n]", books[i].pub.name);
        scanf("%d", &books[i].pub.year);
    }

    printAllBooks(books, n);

    maxBook = findMaxBook(books, n);

    printf("Most Expensive Book\n");
    printf("ID: %d\n", maxBook->id);
    printf("Title: %s\n", maxBook->title);
    printf("Price: %.2f\n", maxBook->price);
    printf("Publisher: %s\n", maxBook->pub.name);
    printf("Year: %d\n", maxBook->pub.year);

    minBook = findMinBook(books, n);

    printf("Least Expensive Book\n");
    printf("ID: %d\n", minBook->id);
    printf("Title: %s\n", minBook->title);
    printf("Price: %.2f\n", minBook->price);
    printf("Publisher: %s\n", minBook->pub.name);
    printf("Year: %d\n", minBook->pub.year);

    free(books);

    return 0;
}