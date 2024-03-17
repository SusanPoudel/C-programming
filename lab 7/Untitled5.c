#include <stdio.h>

// Define the structure Staff
struct Staff {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare an array of structures for 3 staff members
    struct Staff staffMembers[3];

    // Declare a pointer to a structure of type Staff
    struct Staff *ptrStaff;

    // Assign the base address of the array to the pointer
    ptrStaff = staffMembers;

    // Input information for 3 staff members using the pointer
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Staff Member %d:\n", i + 1);

        // Input name
        printf("Enter name: ");
        scanf("%s", (ptrStaff + i)->name);

        // Input address
        printf("Enter address: ");
        scanf("%s", (ptrStaff + i)->address);

        // Input salary
        printf("Enter salary: ");
        scanf("%f", &(ptrStaff + i)->salary);
    }

    // Display information for each staff member using the pointer
    printf("\nStaff Details using Pointer to Structure:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStaff Member %d:\n", i + 1);
        printf("Name: %s\n", (ptrStaff + i)->name);
        printf("Address: %s\n", (ptrStaff + i)->address);
        printf("Salary: %.2f\n", (ptrStaff + i)->salary);
    }

    return 0;
}

