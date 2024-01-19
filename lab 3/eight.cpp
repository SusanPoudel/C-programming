//C program to convert Decimal to Binary number.

#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // To store binary digits
    int i = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    // take input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Call function to convert decimal to binary
    decimalToBinary(decimalNumber);

    return 0;
}

//OUTPUT
//------------
//Enter a decimal number: 45
//Binary representation: 101101
//
//--------------------------------



