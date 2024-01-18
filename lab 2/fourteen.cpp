//C program to enter no of seconds and convert in HH-MM-SS.

#include <stdio.h>

int main() {
    int totalSeconds;

    // take input from user
    printf("Enter the number of seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    // Display the result in the format of HH-MM-SS
    printf("Formatted time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

//OUTPUT
//--------
//Enter the number of seconds: 50000000
//Formatted time: 13888:53:20
//
//--------------------------------
