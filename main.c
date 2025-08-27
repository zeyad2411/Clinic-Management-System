#include <stdio.h>
#include "header.h"
/*
 * =========================================================
 * Clinic Management System - Improvements i have made not included in the file pdf:
 * =========================================================
 * 
 * 1. Implement a Menu Loop for Continuous Use:
 *    - Enhance the usability of the system by allowing users to perform multiple operations without restarting the program.
 *    - This achieved by using a loop within the `adminMode` and `userMode` functions to keep displaying the menu until the user chooses to exit.
 *
 * 2. Enhance Patient Search Functionality:
 *    - Provide users with advanced search capabilities by implementing functions to search patients not only by ID but also by name and other criteria.
 *    - This feature enhances the flexibility and utility of the system for both admins and users.
 *
 * 3. Improve Data Validation:
 *    - Ensure the integrity and correctness of data by adding validation checks for inputs. For example, the age should be a positive number, and names should not contain digits.
 *    - Implement validation functions to check the validity of inputs before processing them.
 *
 * These improvements and ideas aim to make the clinic management system more robust, user-friendly, and feature-rich.
 * =========================================================
 */

// Main function to choose between admin and user modes
int main() {
    execute();
    return 0;
}
