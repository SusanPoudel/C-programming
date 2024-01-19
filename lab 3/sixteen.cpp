//C program to print all the prime numbers upto 50.

#include <stdio.h>

int main() {
    printf("Prime numbers up to 50 are:\n");

    for (int i = 2; i <= 50; ++i) {
        int isPrime = 1;  // Assume i is prime

        // Check divisibility from 2 to i / 2
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0;  // i is not prime
                break;
            }
        }

        // If isPrime is still 1, i is prime
        if (isPrime) {
            printf("%d\t", i);
        }
    }

    return 0;
}

//OUTPUT
//------------
//Prime numbers up to 50 are:
//2       3       5       7       11      13      17      19      23      29      31      37      41      43      47
//--------------------------------

