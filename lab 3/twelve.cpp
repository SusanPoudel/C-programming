//C program to enter a number and check if it is palindrome.

#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder, temp;

    // take inpt from user from user
    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    temp = originalNumber;

    // Store the reverse of the number in reversedNumber
    while (temp != 0) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp = temp / 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}

//OUTPUT
//------------
//Enter a number: 121
//121 is a palindrome.
//
//--------------------------------
