#include <stdio.h>

int main() {
    int N;

    // Input: Get the value of N
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Declare an array of size N
    int numbers[N];

    // Input: Get N numbers from the user
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sum of numbers greater than 10
    int sumGreaterThan10 = 0;

    // Sum of even elements
    int sumEven = 0;

    // Sum of odd elements
    int sumOdd = 0;

    // Calculate sums
    for (int i = 0; i < N; i++) {
        if (numbers[i] > 10) {
            sumGreaterThan10 += numbers[i];
        }

        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    // Display results
    printf("\nSum of numbers greater than 10: %d\n", sumGreaterThan10);
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    return 0;
}

