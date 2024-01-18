//C program to enter no of days and display it in the format of YY-MM-DD.

#include <stdio.h>

int main() {
    int numberOfDays;

    // take input from user 
    printf("Enter the number of days: ");
    scanf("%d", &numberOfDays);

    // Calculate years, months, and days
    int years = numberOfDays / 365;
    int remainingDays = numberOfDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    // Display the result in the format of YY-MM-DD7
    printf("Formatted date: %02d-%02d-%02d\n", years, months, days);

    return 0;
}

//OUTPUT
//--------
//Enter the number of days: 6789
//Formatted date: 18-07-09
//
//--------------------------------
