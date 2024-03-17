#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "NEPAL";
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        char pattern[length - i + 1];
        strncpy(pattern, word + i, length - i);
        pattern[length - i] = '\0';
        printf("%s\n", pattern);
    }

    return 0;
}

