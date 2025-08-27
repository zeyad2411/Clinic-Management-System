#include<stdio.h>
#include"header.h"
// Function to view a patient record
void viewPatientRecord() {
    printf("View Patient Record:\n");
    printf("1. By ID\n");
    printf("2. By Name\n");
    printf("3. By Age\n");
    printf("Enter your choice: ");
    s32 choice;
    scanf("%d", &choice);

    if (choice == 1) {
        s32 id;
        printf("Enter patient ID: ");
        scanf("%d", &id);
        patient *p = findPatientByID(id);
        if (p) {
            displayPatient(p);
        } else {
            printf("Patient with ID %d not found.\n", id);
        }
    } else if (choice == 2) {
        u4 name[100];
        printf("Enter patient name: ");
        scanf("%s", name);
        patient *p = findPatientByName(name);
        if (p) {
            displayPatient(p);
        } else {
            printf("Patient with name %s not found.\n", name);
        }
    } else if (choice == 3) {
        s32 age;
        printf("Enter patient age: ");
        scanf("%d", &age);
        
        patient *current = head;
        int found = 0;
        while (current != NULL) {
            if (current->age == age) {
                displayPatient(current);
                found = 1;
            }
            current = current->next;
        }
        if (!found) {
            printf("No patients found with age %d.\n", age);
        }
    } else {
        printf("Invalid choice.\n");
    }
}

// Function to view today's reservations
void viewReservations(){
	printf("Today's Reservations:\n");
    for (s32 i = 0; i < 5; i++) {
        if (slots[i].reserved) {
            printf("Slot %s: Patient ID %d\n", slotTimes[i], slots[i].patientID);
        }
    }
}
