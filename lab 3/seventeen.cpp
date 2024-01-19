//C program to enter a number and check if it prime or composite number

#include <stdio.h>

int main() {
    int number, isPrime = 1;  // Assume the number is prime

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for prime or composite
    if (number <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = 0;  // Number is divisible, so it's not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite number.\n", number);
    }

    return 0;
}

//OUTPUT
//------------
//Enter a number: 45
//45 is a composite number.
//
//--------------------------------

