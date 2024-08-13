#include <stdio.h>
#include <string.h>

void naiveStringMatching(char *text, char *pattern) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    
    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;

        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == patternLength) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";

    naiveStringMatching(text, pattern);

    return 0;
}
