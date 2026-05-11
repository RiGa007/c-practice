// Write a C program using a structure and structure pointer to determine whether an employee is allowed for air travel.

// Create a structure employee containing:

// Name
// Designation
// Department
// Salary

// Requirements:

// Read employee details using a structure pointer.
// Use strcmp() for string comparison.
// Air travel is allowed if:
// Designation is Secretary or Additional_Secretary
// Designation is Joint_Secretary or Deputy_Secretary with salary greater than 20000
// Designation is Under_Secretary and department is Marketing
// Display whether air travel is allowed or not.

#include <stdio.h>
#include <string.h>

// Define the structure as requested
struct employee {
    char name[55];
    char designation[55];
    char department[55];
    int salary;
};

int main() {
    // Initialize the structure and a pointer to it
    struct employee emp;
    struct employee *ptr = &emp;

 // Read the inputs using the pointer
    scanf("%s", ptr->name);
    scanf("%s", ptr->designation);
    scanf("%s", ptr->department);
    scanf("%d", &ptr->salary);

    int is_allowed = 0;

   // Condition 1: Secretary or Additional_Secretary
    if (strcmp(ptr->designation, "Secretary") == 0 || strcmp(ptr->designation, "Additional_Secretary") == 0) {
        is_allowed = 1;
    } 
    // Condition 2: Joint_Secretary or Deputy_Secretary with salary > 20000
    else if ((strcmp(ptr->designation, "Joint_Secretary") == 0 || strcmp(ptr->designation, "Deputy_Secretary") == 0) && ptr->salary > 20000) {
        is_allowed = 1;
    } 
    // Condition 3: Under_Secretary in Marketing department
    else if (strcmp(ptr->designation, "Under_Secretary") == 0 && strcmp(ptr->department, "Marketing") == 0) {
        is_allowed = 1;
    }
    
    // Output the result based on the flag
    if (is_allowed) {
        printf("Air travel is allowed\n");
    } else {
        printf("Air travel is not allowed\n");
    }
    
    return 0;
}