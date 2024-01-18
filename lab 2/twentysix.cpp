//C program to shift input number by two bits to the left and display the result.

#include <stdio.h>

int main() {
    int num;

    // take input from user 
    printf("Enter a number: ");
    scanf("%d", &num);

    // Shift the number two bits to the left
    int shiftedResult = num << 2;

    // Display the result
    printf("Original number: %d\n", num);
    printf("Number after shifting two bits to the left: %d\n", shiftedResult);

    return 0;
}

//OUTPUT
//--------
//Enter a number: 8
//Original number: 8
//Number after shifting two bits to the left: 32
//
//--------------------------------
