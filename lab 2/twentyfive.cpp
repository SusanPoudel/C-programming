//C program to enter two integers and perform bitwise ANDing, ORing and XORing.

#include <stdio.h>

int main() {
    int num1, num2;

    // take input from user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform bitwise AND, OR, and XOR operations
    int bitwiseAND = num1 & num2;
    int bitwiseOR = num1 | num2;
    int bitwiseXOR = num1 ^ num2;

    // Display the results
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, bitwiseAND);
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, bitwiseOR);
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, bitwiseXOR);

    return 0;
}

//OUTPUT
//--------
//Enter the first integer: 8
//Enter the second integer: 9
//Bitwise AND: 8 & 9 = 8
//Bitwise OR: 8 | 9 = 9
//Bitwise XOR: 8 ^ 9 = 1
//
//--------------------------------

