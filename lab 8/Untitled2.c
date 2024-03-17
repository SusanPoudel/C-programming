#include <stdio.h>

int main() {
    // Declare FILE pointer
    FILE *filePointer;

    // Open the file in read mode ("r")
    filePointer = fopen("F:\\student.txt", "r");

    // Check if the file is opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Variables to store data from the file
    int rollNo;
    char name[50];
    float percentage;

    // Read data from the file
    fscanf(filePointer, "Roll Number: %d\n", &rollNo);
    fscanf(filePointer, "Name: %s\n", name);
    fscanf(filePointer, "Percentage: %f\n", &percentage);

    // Close the file
    fclose(filePointer);

    // Display the read data
    printf("Student Record:\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}

