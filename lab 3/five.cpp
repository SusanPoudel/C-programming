//C program for menu-driven case to display below menu and perform task as per user’s choice repeatedly until his/her choice is to exit.
//
//Menu
//---------------------------------------------------------------------
//1. Conversion of ASCII code to char
//2. To find the sum of n natural numbers
//3. To find the greatest among two entered numbers.
//4. Exit from program
//-------------------------------------------------------------------
//Enter your choice:

#include <stdio.h>

// Function decleration
void asciiToChar();
void sumOfNaturalNumbers();
void findGreatest();

int main() {
    int choice;

    do {
        // Display menu
        printf("\nMenu\n");
        printf("---------------------------------------------------------------\n");
        printf("1. Conversion of ASCII code to char\n");
        printf("2. To find the sum of n natural numbers\n");
        printf("3. To find the greatest among two entered numbers\n");
        printf("4. Exit from program\n");
        printf("---------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform tasks based on user's choice
        switch (choice) {
            case 1:
                asciiToChar();
                break;
            case 2:
                sumOfNaturalNumbers();
                break;
            case 3:
                findGreatest();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to convert ASCII code to char
void asciiToChar() {
    int asciiCode;
    printf("Enter ASCII code: ");
    scanf("%d", &asciiCode);
    printf("Character: %c\n", (char)asciiCode);
}

// Function to find the sum of n natural numbers
void sumOfNaturalNumbers() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);
}

// Function to find the greatest among two entered numbers
void findGreatest() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
}

//OUTPUT
//------------
//Menu
//---------------------------------------------------------------
//1. Conversion of ASCII code to char
//2. To find the sum of n natural numbers
//3. To find the greatest among two entered numbers
//4. Exit from program
//---------------------------------------------------------------
//Enter your choice: 1
//Enter ASCII code: 56
//Character: 8
//
//Menu
//---------------------------------------------------------------
//1. Conversion of ASCII code to char
//2. To find the sum of n natural numbers
//3. To find the greatest among two entered numbers
//4. Exit from program
//---------------------------------------------------------------
//Enter your choice: 2
//Enter the value of n: 8
//Sum of first 8 natural numbers: 36
//
//Menu
//---------------------------------------------------------------
//1. Conversion of ASCII code to char
//2. To find the sum of n natural numbers
//3. To find the greatest among two entered numbers
//4. Exit from program
//---------------------------------------------------------------
//Enter your choice: 3
//Enter the first number: 67
//Enter the second number: 78
//The greatest number is: 78
//
//Menu
//---------------------------------------------------------------
//1. Conversion of ASCII code to char
//2. To find the sum of n natural numbers
//3. To find the greatest among two entered numbers
//4. Exit from program
//---------------------------------------------------------------
//Enter your choice: 4
//Exiting program.
//
//--------------------------------

