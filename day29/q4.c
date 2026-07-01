#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
};

int main() {
    struct Item item[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].qty);
    }

    printf("\nInventory Details:\n");

    for(i = 0; i < 3; i++) {
        printf("ID: %d\tName: %s\tQuantity: %d\n",
               item[i].id, item[i].name, item[i].qty);
    }

    return 0;
}