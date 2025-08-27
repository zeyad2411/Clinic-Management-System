#include <stdio.h>
#include "header.h"

void userMode() {
    s32 choice;

    do {
        printSeparator();
        printf("User Mode:\n");
        printf("1. View patient record\n");
        printf("2. View todays reservations\n");
		printf("3. Switch to admin mode\n");
        printf("4. Exit user mode\n");
        printSeparator();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: viewPatientRecord(); break;
            case 2: viewReservations(); break;
			case 3: adminMode();
            case 4: printf("Exiting user mode...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);
}
