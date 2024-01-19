//C program to find the HCF and LCM of two input numbers.

#include <stdio.h>

// Function to find HCF of two numbers using Euclidean Algorithm
int findHCF(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}

// Function to find LCM of two numbers
int findLCM(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0)
            return max;
        max++;
    }
}

int main() {
    int number1, number2;

    // take input from user 
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Find and display the HCF and LCM
    int hcf = findHCF(number1, number2);
    int lcm = findLCM(number1, number2);

    printf("HCF of %d and %d is: %d\n", number1, number2, hcf);
    printf("LCM of %d and %d is: %d\n", number1, number2, lcm);

    return 0;
}

//OUTPUT
//------------
//Enter first number: 1
//Enter second number: 7
//HCF of 1 and 7 is: 1
//LCM of 1 and 7 is: 7
//
//--------------------------------

