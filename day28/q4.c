#include <stdio.h>

struct Contact {
    char name[30];
    long long phone;
};

int main() {
    struct Contact c[2];

    for(int i = 0; i < 2; i++) {
        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone: ");
        scanf("%lld", &c[i].phone);
    }

    printf("\nContacts:\n");
    for(int i = 0; i < 2; i++) {
        printf("%s - %lld\n", c[i].name, c[i].phone);
    }

    return 0;
}