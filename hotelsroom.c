#include <stdio.h>

int main() {
    char name[50];
    int roomNumber;
    char checkInDate[20], checkOutDate[20];
    int guests;

    printf("Welcome to Hotel Room Booking System\n");
    printf("-------------------------------------\n");
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter room number: ");
    scanf("%d", &roomNumber);

    printf("Enter check-in date (DD/MM/YYYY): ");
    scanf("%s", checkInDate);

    printf("Enter check-out date (DD/MM/YYYY): ");
    scanf("%s", checkOutDate);

    printf("Enter number of guests: ");
    scanf("%d", &guests);


    printf("\nBooking Confirmation:\n");
    printf("---------------------\n");
    printf("Name: %s", name);
    printf("Room Number: %d\n", roomNumber);
    printf("Check-in Date: %s\n", checkInDate);
    printf("Check-out Date: %s\n", checkOutDate);
    printf("Number of Guests: %d\n", guests);

    printf("\nThank you for booking with us!\n");

    return 0;
}
