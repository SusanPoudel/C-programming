#include <stdio.h>

int main() {
    // Declare FILE pointer
    FILE *filePointer;

    // Open the file in write mode ("w")
    filePointer = fopen("student.txt", "w");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Input data for a student
    int rollNo;
    char name[50];
    float percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    // Write data to the file
    fprintf(filePointer, "Roll Number: %d\n", rollNo);
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Percentage: %.2f\n", percentage);

    // Close the file
    fclose(filePointer);

    printf("Data written to the file successfully.\n");

    return 0;
}

