#include <stdio.h>
#include<string.h>
#include "header.h"

// Array to hold slot information
Slot slots[5] = {
    {0, -1},
    {0, -1},
    {0, -1},
    {0, -1},
    {0, -1}
};

// Array to hold slot time strings
const u4* slotTimes[5] = {
    "2pm to 2:30pm",
    "2:30pm to 3pm",
    "3pm to 3:30pm",
    "4pm to 4:30pm",
    "4:30pm to 5pm"
};

// Function to display available slots
void displayAvailableSlots() {
    printf("Available slots:\n");
    for (s32 i = 0; i < 5; i++) {
        if (!slots[i].reserved) {
            printf("%d: %s\n", i + 1, slotTimes[i]);
        }
    }
}

// Function to display a patient's information
void displayPatient(patient* p) {
    if (p == NULL) {
        printf("Patient not found.\n");
        return;
    }

    printf("Patient ID: %d\n", p->ID);
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Gender: %s\n", p->gender);
}
void printSeparator() {
    printf("******************************************\n");
}

patient* findPatientByName(u4 *name) {
    patient *current = head;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}
s32 checkGender(u4 gender[100]) {
    if (strcmp(gender, "male") != 0 && strcmp(gender, "female") != 0) {
        return 0; // Invalid gender
    } else {
        return 1; // Valid gender
    }
}
