#include <stdio.h>

// Define the structure Staff
struct Staff {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare an array of structures for 5 staff members
    struct Staff staffMembers[5];

    // Input information for 5 staff members
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Staff Member %d:\n", i + 1);

        // Input name
        printf("Enter name: ");
        scanf("%s", staffMembers[i].name);

        // Input address
        printf("Enter address: ");
        scanf("%s", staffMembers[i].address);

        // Input salary
        printf("Enter salary: ");
        scanf("%f", &staffMembers[i].salary);
    }

    // Display information for each staff member
    printf("\nStaff Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStaff Member %d:\n", i + 1);
        printf("Name: %s\n", staffMembers[i].name);
        printf("Address: %s\n", staffMembers[i].address);
        printf("Salary: %.2f\n", staffMembers[i].salary);
    }

    // Calculate and display total salary distributed
    float totalSalary = 0;
    for (int i = 0; i < 5; i++) {
        totalSalary += staffMembers[i].salary;
    }

    printf("\nTotal Salary Distributed: %.2f\n", totalSalary);

    return 0;
}

