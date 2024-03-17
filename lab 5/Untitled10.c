#include <stdio.h>

// Function prototype
int reverseNumber(int num);

int main() {
    int number;

    // Input: Get a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Input should be a positive integer.\n");
    } else {
        // Call the recursive function to find the reverse
        int reversed = reverseNumber(number);
        printf("Reverse of %d is %d\n", number, reversed);
    }

    return 0;
}

// Recursive function to find the reverse of a number
int reverseNumber(int num) {
    static int reversed = 0;

    if (num != 0) {
        reversed = reversed * 10 + num % 10;

        // Recursive call for the next digit
        reverseNumber(num / 10);
    }

    return reversed;
}

