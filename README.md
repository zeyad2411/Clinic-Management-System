
# 🏥 Clinic Management System (C Language)

A **console-based Clinic Management System** implemented in **C** that manages patient records and doctor appointment reservations.
The project is designed around **modular programming** and uses **linked lists** for patient management along with a slot-based scheduling system.

It features two modes of operation:

* **🔑 Admin Mode** → For clinic administrators to manage patients and appointments.
* **👥 User Mode** → For patients/users to view records and reservation details.

---

## 📂 Project Structure

```
📦 Clinic-Management-System
├── adminmode.c        # Admin menu navigation and actions
├── adminmodefuncs.c   # Helper functions & enums
├── header.h           # Common header: typedefs, structs, prototypes, globals
├── linkedlist.c       # Linked list operations for patient management
├── source.c           # Slot handling, validation, utilities
├── usermode.c         # User menu navigation
├── usermodefuncs.c    # Functions for viewing records & reservations
└── README.md          # Documentation
```

---

## ✨ Features

### 👨‍⚕️ Admin Mode

* ➕ **Add new patient records** (with ID uniqueness check).
* ✏️ **Edit existing patient records**.
* 📅 **Reserve slots** with the doctor (5 available slots).
* ❌ **Cancel existing reservations**.
* 🗑️ **Delete patient records** by ID.
* 🔄 **Switch to User Mode** for limited-access usage.
* 🚪 **Exit Admin Mode** safely.

### 👥 User Mode

* 📋 **View patient records** by:

  * Patient **ID**
  * Patient **Name**
  * Patient **Age**
* 📅 **View today’s reservations** (slot schedule with assigned patient IDs).
* 🔄 **Switch back to Admin Mode** or exit the system.

---

## 🗂️ Core Data Structures

### Patient (Linked List Node)

```c
typedef struct patient {
    char name[100];
    int age;
    char gender[100];
    int ID;
    struct patient *next;
} patient;
```

### Appointment Slot

```c
typedef struct {
    int reserved;    // 0 = free, 1 = reserved
    int patientID;   // ID of the patient who reserved
} Slot;
```

### Appointment Times

```c
const char* slotTimes[5] = {
    "2:00 pm – 2:30 pm",
    "2:30 pm – 3:00 pm",
    "3:00 pm – 3:30 pm",
    "4:00 pm – 4:30 pm",
    "4:30 pm – 5:00 pm"
};
```

---

## ⚙️ How It Works

1. **Authentication**
   Admin access is protected by `authenticate()`.

   * You can implement password-based authentication inside this function.

2. **Patient Management**

   * Patients are stored in a **singly linked list**.
   * Supports add, edit, search, and delete operations.

3. **Slot Reservation System**

   * 5 slots available per day.
   * Patients reserve slots by ID.
   * Slots can be canceled and reassigned.

4. **Mode Switching**

   * Admin and User modes are linked together for seamless navigation.

---

## ▶️ Running the Project

### 1. Compile the project

Using **GCC**:

```bash
gcc adminmode.c adminmodefuncs.c linkedlist.c source.c usermode.c usermodefuncs.c -o clinic
```

### 2. Run the executable

```bash
./clinic
```

---

## 📋 Example Workflow

**Admin Mode**

1. Add a patient (`ID: 101, Name: Ali, Age: 30, Gender: male`).
2. Reserve a slot for that patient (e.g., *2:00 – 2:30 pm*).
3. Switch to **User Mode**.

**User Mode**

1. View patient record by **ID** → Details of Ali displayed.
2. View today’s reservations → Slot time with patient ID shown.
3. Exit or switch back to **Admin Mode**.

---

## 📊 Program Flow (Conceptual)

```
          ┌──────────────┐
          │   START      │
          └─────┬────────┘
                │
         ┌──────▼───────┐
         │ Authentication│
         └──────┬───────┘
                │
        ┌───────▼────────┐
        │   Admin Mode    │
        ├─────────────────┤
        │ Add Patient     │
        │ Edit Patient    │
        │ Reserve Slot    │
        │ Cancel Slot     │
        │ Delete Patient  │
        │ Switch to User  │
        └───────┬────────┘
                │
        ┌───────▼────────┐
        │   User Mode     │
        ├─────────────────┤
        │ View Record     │
        │ View Reservations │
        │ Switch to Admin │
        └───────┬────────┘
                │
          ┌─────▼──────┐
          │    EXIT     │
          └─────────────┘
```

---

## 🚀 Future Enhancements

* 🗃️ **Persistent storage** → Save records to a file or database instead of memory.
* 🔍 **Advanced search filters** (by gender, multiple criteria).
* ✅ **Stronger input validation** and error handling.
* 🖥️ **GUI implementation** (using C++ Qt or Python frontend).
* 🌐 **Networking support** to manage clinic data across multiple devices.

---


