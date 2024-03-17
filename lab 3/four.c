//C program using switch statement to enter the percentage and display the division. Consider SLC criteria.

#include <stdio.h>

int main() {
    float percentage;

    // take nput from user
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Check if the percentage is in the valid range
    if (percentage >= 0 && percentage <= 100) {
        // Determine the division based on the percentage using a switch statement
        switch ((int)percentage / 10) {
            case 10:
            case 9:
                printf("Division: Distinction\n");
                break;
            case 8:
                printf("Division: First Division\n");
                break;
            case 7:
                printf("Division: Second Division\n");
                break;
            case 6:
                printf("Division: Third Division\n");
                break;
            default:
                printf("Division: Fail\n");
        }
    } else {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
//OUTPUT
//------------
//Enter the percentage: 90
//Division: Distinction
//
//--------------------------------


