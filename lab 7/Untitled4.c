#include <stdio.h>

// Define the structure Staff
struct Staff {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare a structure variable of type Staff
    struct Staff staffMember;

    // Declare a pointer to a structure of type Staff
    struct Staff *ptrStaff;

    // Assign the address of the structure variable to the pointer
    ptrStaff = &staffMember;

    // Input information for the staff member using the pointer
    printf("Enter name of the staff member: ");
    scanf("%s", ptrStaff->name);

    printf("Enter address of the staff member: ");
    scanf("%s", ptrStaff->address);

    printf("Enter salary of the staff member: ");
    scanf("%f", &(ptrStaff->salary));

    // Display the entered information using the pointer
    printf("\nStaff Details using Pointer to Structure:\n");
    printf("Name: %s\n", ptrStaff->name);
    printf("Address: %s\n", ptrStaff->address);
    printf("Salary: %.2f\n", ptrStaff->salary);

    return 0;
}

