//C program to enter a number and display it in reverse order.

#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the reverse of the number in reversedNumber
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    // Display the number in reverse order
    printf("Number in reverse order: %d\n", rev);

    return 0;
}

//OUTPUT
//------------
//Enter a number: 456
//Number in reverse order: 654
//
//--------------------------------



