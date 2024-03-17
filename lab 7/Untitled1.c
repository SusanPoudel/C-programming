#include <stdio.h>

// Define the structure Staff
struct Staff {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare a variable of type Staff
    struct Staff staffMember;

    // Input information for the staff member
    printf("Enter name of the staff member: ");
    scanf("%s", staffMember.name);

    printf("Enter address of the staff member: ");
    scanf("%s", staffMember.address);

    printf("Enter salary of the staff member: ");
    scanf("%f", &staffMember.salary);

    // Display the entered information
    printf("\nStaff Details:\n");
    printf("Name: %s\n", staffMember.name);
    printf("Address: %s\n", staffMember.address);
    printf("Salary: %.2f\n", staffMember.salary);

    return 0;
}

