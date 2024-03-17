#include <stdio.h>

// Define the structure Date
struct Date {
    int year;
    int month;
    int day;
};

// Define the structure Staff with nested Date structure
struct Staff {
    char name[50];
    struct Date dateOfBirth;
    char address[100];
    float salary;
};

int main() {
    // Declare an array of structures for 3 staff members
    struct Staff staffMembers[3];

    // Input information for 3 staff members
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Staff Member %d:\n", i + 1);

        // Input name
        printf("Enter name: ");
        scanf("%s", staffMembers[i].name);

        // Input date of birth
        printf("Enter date of birth (Year Month Day): ");
        scanf("%d %d %d", &staffMembers[i].dateOfBirth.year, &staffMembers[i].dateOfBirth.month, &staffMembers[i].dateOfBirth.day);

        // Input address
        printf("Enter address: ");
        scanf("%s", staffMembers[i].address);

        // Input salary
        printf("Enter salary: ");
        scanf("%f", &staffMembers[i].salary);
    }

    // Display information for each staff member
    printf("\nStaff Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStaff Member %d:\n", i + 1);
        printf("Name: %s\n", staffMembers[i].name);
        printf("Date of Birth: %d/%d/%d\n", staffMembers[i].dateOfBirth.year, staffMembers[i].dateOfBirth.month, staffMembers[i].dateOfBirth.day);
        printf("Address: %s\n", staffMembers[i].address);
        printf("Salary: %.2f\n", staffMembers[i].salary);
    }

    return 0;
}

