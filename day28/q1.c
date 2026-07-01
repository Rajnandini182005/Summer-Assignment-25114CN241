#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b[2];

    for(int i = 0; i < 2; i++) {
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\nLibrary Records:\n");
    for(int i = 0; i < 2; i++) {
        printf("ID: %d  Name: %s\n", b[i].id, b[i].name);
    }

    return 0;
}