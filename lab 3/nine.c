//C program to convert Binary to Decimal number.

#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }

    return decimal;
}

int main() {
    int binaryNumber;

    // take input from user
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    // Call function to convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);

    // Display the decimal representation
    printf("Decimal representation: %d\n", decimalNumber);

    return 0;
}

//OUTPUT
//------------
//Enter a binary number: 101101
//Decimal representation: 45
//
//--------------------------------

