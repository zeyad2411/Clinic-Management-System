#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Global variables for the linked list
patient *head = NULL;
patient *current = NULL;

// Function to insert a patient at the end of the list
void InsertAtLast(u4 name[100], s32 age, u4 gender[100], s32 ID) {
    patient *temp = (patient *)malloc(sizeof(patient));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    strcpy(temp->name, name);
    temp->age = age;
    strcpy(temp->gender, gender);
    temp->ID = ID;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

// Function to check if an ID exists in the list
s32 checkID(s32 givenID) {
    current = head;
    while (current != NULL) {
        if (current->ID == givenID) {
            return 0; // ID exists
        }
        current = current->next;
    }
    return 1; // ID does not exist
}

// Function to find a patient by ID
patient* findPatientByID(s32 id) {
    current = head;
    while (current != NULL) {
        if (current->ID == id) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Patient not found
}
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// Function to delete a patient by ID
void deletePatient(s32 id) {
    patient *current = head;
    patient *previous = NULL;

    // Traverse the list to find the patient with the given ID
    while (current != NULL && current->ID != id) {
        previous = current;
        current = current->next;
    }

    // If patient is not found
    if (current == NULL) {
        printf("Patient with ID %d not found.\n", id);
        return;
    }

    // If the patient to be deleted is the head
    if (previous == NULL) {
        head = current->next;
    } else {
        previous->next = current->next;
    }

    // Free the memory allocated for the patient
    free(current);

    printf("Patient with ID %d has been deleted.\n", id);
}


