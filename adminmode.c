#include <stdio.h>
#include "header.h"

void adminMode() {
    if (authenticate() != 1) {
        return;
    }

    s32 choice;

    do {
        printSeparator();
        printf("Admin Mode:\n");
        printf("1. Add new patient record\n");
        printf("2. Edit patient record\n");
        printf("3. Reserve a slot with the doctor\n");
        printf("4. Cancel reservation\n");
		printf("5. Delete patient\n");
		printf("6.Switch to user mode\n");
        printf("7. Exit admin mode\n");
        printSeparator();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPatient(); break;
            case 2: editPatient(); break;
            case 3: reserveSlot(); break;
            case 4: cancelReservation(); break;
			case 5:{
                s32 id;
                printf("Enter patient ID to delete: ");
                scanf("%d", &id);
                deletePatient(id);
                break;
            }
			case 6: userMode(); break;
            case 7: printf("Exiting admin mode...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);
}
