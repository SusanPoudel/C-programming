#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter five integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort in ascending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display ascending order
    printf("\nAscending order: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    // Sort in descending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display descending order
    printf("Descending order: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    // Display difference
    printf("Difference: %d\n", numbers[4] - numbers[0]);

    return 0;
}

