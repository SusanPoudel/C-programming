#include <stdio.h>

// Define the structure Student
struct Student {
    int roll;
    char name[50];
    float per;
};

int main() {
    // Declare an array of structures for 3 students
    struct Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &students[i].roll);

        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Percentage for Student %d: ", i + 1);
        scanf("%f", &students[i].per);
    }

    // Open the file in write mode ("w")
    FILE *filePointer = fopen("student.txt", "w");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Write data to the file
    for (int i = 0; i < 3; i++) {
        fprintf(filePointer, "Roll Number: %d\n", students[i].roll);
        fprintf(filePointer, "Name: %s\n", students[i].name);
        fprintf(filePointer, "Percentage: %.2f\n", students[i].per);
        fprintf(filePointer, "\n"); // Add a newline for better readability
    }

    // Close the file
    fclose(filePointer);

    printf("Data written to the file successfully.\n");

    // Display all records
    printf("\nAll Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].per);
        printf("\n"); // Add a newline for better readability
    }

    return 0;
}

