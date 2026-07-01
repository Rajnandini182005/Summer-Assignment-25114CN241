#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n1.Length\n2.Reverse\n3.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                strrev(str);
                printf("Reverse = %s\n", str);
                break;

            case 3:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 3);

    return 0;
}