#ifndef HEADER_H
#define HEADER_H

typedef int s32;
typedef unsigned int s64;
typedef char u4;
typedef unsigned char u8;

// Structure definition for a patient
typedef struct patient {
    u4 name[100];
    s32 age;
    u4 gender[100];
    s32 ID;
    struct patient *next;
} patient;

// Function prototypes
void execute();
void adminMode();
void userMode();
int authenticate();
void addPatient();
void editPatient();
void reserveSlot();
void cancelReservation();
void searchPatient() ;
patient* findPatientByName(u4 *name);
s32 isValidName(u4 name[]);
void viewPatientRecord();
void viewReservations();
s32 checkID(s32 givenID);
patient* findPatientByID(s32 id);
void displayAvailableSlots();
void displayPatient(patient* p);
s32 checkGender(u4 gender[100]);
void deletePatient(s32 id);
void InsertAtLast(u4 name[100], s32 age, u4 gender[100], s32 ID);
void printSeparator();
// Global variables
extern patient *head;
extern patient *current;

// Slot structure
typedef struct {
    s32 reserved;
    s32 patientID;
} Slot;

// Global slot array
extern Slot slots[];
extern const u4* slotTimes[];

#endif // HEADER_H
