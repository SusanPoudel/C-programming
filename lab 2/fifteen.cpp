//C program to enter bytes and convert in MB-KB-B

#include <stdio.h>

int main() {
    long long int totalBytes;

    // take input from user 
    printf("Enter the number of bytes: ");
    scanf("%lld", &totalBytes);

    // Calculate megabytes, kilobytes, and bytes
    long long int megabytes = totalBytes / (1024 * 1024);
    long long int remainingBytes = totalBytes % (1024 * 1024);
    int kilobytes = remainingBytes / 1024;
    int bytes = remainingBytes % 1024;

    // Display the result in the format of MB-KB-B
    printf("Formatted size: %lldMB %dKB %dBytes\n", megabytes, kilobytes, bytes);

    return 0;
}

//OUTPUT
//--------
//Enter the number of bytes: 6789345
//Formatted size: 6MB 486KB 225Bytes
//
//--------------------------------




