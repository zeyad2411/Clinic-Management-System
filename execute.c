#include <stdio.h>
#include "header.h"

void execute() {
    printf("Welcome to HALLA MADRID Clinic Management System\n");

    while (1) {
        s32 mode;
        printf("Select mode:\n");
        printf("1. Admin Mode\n");
        printf("2. User Mode\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mode);

        switch (mode) {
            case 1: 
                adminMode(); 
                break;
            case 2: 
                userMode(); 
                break;
            case 3: 
                printf("Exiting the system...\n");
                return;
            default: 
                printf("Invalid choice. Please try again.\n");
        }
    }
}
