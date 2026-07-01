#include <stdio.h>

int main() {
    int seats = 10, book;

    printf("Available Seats: %d\n", seats);
    printf("Enter seats to book: ");
    scanf("%d", &book);

    if(book <= seats) {
        seats -= book;
        printf("Booking Successful\n");
        printf("Remaining Seats: %d", seats);
    } else {
        printf("Seats not available");
    }

    return 0;
}