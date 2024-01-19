//C program to display the first five even numbers and find the sum also, using:
//a) While loop
//b) Do while loop
//c) For loop

#include <stdio.h>

int main() {
    // Using  While loop
    printf("Using While loop:\n");
    int i = 1, count = 0, sumWhile = 0;
    while (count < 5) {
        if (i % 2 == 0) {
            printf("%d ", i);
            sumWhile += i;
            count++;
        }
        i++;
    }
    printf("\nSum: %d\n", sumWhile);

    // Using  Do-while loop
    printf("\nUsing Do-while loop:\n");
    i = 1;
    count = 0;
    int sumDoWhile = 0;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
            sumDoWhile += i;
            count++;
        }
        i++;
    } while (count < 5);
    printf("\nSum: %d\n", sumDoWhile);

    // Using  For loop
    printf("\nUsing For loop:\n");
    int sumFor = 0;
    for (i = 1, count = 0; count < 5; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            sumFor += i;
            count++;
        }
    }
    printf("\nSum: %d\n", sumFor);

    return 0;
}

//OUTPUT
//------------
//Using While loop:
//2 4 6 8 10
//Sum: 30
//
//Using Do-while loop:
//2 4 6 8 10
//Sum: 30
//
//Using For loop:
//2 4 6 8 10
//Sum: 30
//
//--------------------------------
