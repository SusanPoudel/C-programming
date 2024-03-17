#include <stdio.h>

int main() {
    int numbers[5];
    float sum = 0, average;

    // Input and Display
    for (int i = 0; i < 5; i++) {
    	printf("Entered integer at index %d:", i);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Display sum and average
    printf("\nSum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

