#include <stdio.h>

int main() {
    // Declare FILE pointer
    FILE *filePointer;

    // Open the file in append mode ("a")
    filePointer = fopen("F:\\student.txt", "a");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Input data for a new student
    int rollNo;
    char name[50];
    float percentage;

    printf("Enter Roll Number for the new student: ");
    scanf("%d", &rollNo);

    printf("Enter Name for the new student: ");
    scanf("%s", name);

    printf("Enter Percentage for the new student: ");
    scanf("%f", &percentage);

    // Write data to the file
    fprintf(filePointer, "\nRoll Number: %d\n", rollNo);
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Percentage: %.2f\n", percentage);

    // Close the file
    fclose(filePointer);

    printf("New student record added to the file successfully.\n");

    return 0;
}

