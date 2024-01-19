//C program to print below pattern:
//	1			1			54321		PROGRAM		   1
//	22			12			4321		PROGRA	      121
//	333			123			321			PROGR	     12321
//	4444		1234		21			PROG		1234321
//	55555,		12345,		1,			PRO
//										PR
//										P

#include <stdio.h>

int main() {

    // Pattern 1
    printf("Pattern 1:\n");
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", i);
        }
        printf("\n");
    }

    // Pattern 2
    printf("\nPattern 2:\n");
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Pattern 3
    printf("\nPattern 3:\n");
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Pattern 4
    printf("\nPattern 4:\n");
    char str[] = "PROGRAM";
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    
    // Pattern 5
    for (int i = 1; i <= 4; ++i) {
        // Print spaces before the numbers
        for (int j = 4; j > i; --j) {
            printf(" ");
        }

        // Print the increasing sequence
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }

        // Print the decreasing sequence
        for (int j = i - 1; j > 0; --j) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

