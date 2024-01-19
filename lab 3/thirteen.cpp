//C program to print palindrome numbers upto N.

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNumber = num;
    int rev = 0, rem;

    while (originalNumber != 0) {
        rem = originalNumber % 10;
        rev = rev * 10 + rem;
        originalNumber = originalNumber / 10;
    }

    return (num == rev);
}

int main() {
    int N;

    // take input from user
    printf("Enter the limit N: ");
    scanf("%d", &N);

    // Print palindrome numbers up to N
    printf("Palindrome numbers up to %d are:\n", N);
    for (int i = 0; i <= N; ++i) {
        if (isPalindrome(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

//OUTPUT
//------------
//Enter the limit N: 15
//Palindrome numbers up to 15 are:
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//11
//
//--------------------------------
