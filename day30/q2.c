#include <stdio.h>

struct Book {
    int id;
    char name[30];
    char author[30];
};

int main() {
    struct Book b[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Details:\n");
    for(i = 0; i < 2; i++) {
        printf("ID: %d\nBook: %s\nAuthor: %s\n\n",
               b[i].id, b[i].name, b[i].author);
    }

    return 0;
}