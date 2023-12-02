/*
Exercise 1-14:
Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>

#define MAX_CHAR 128    /* According to ASCII, there are encodings for 128 characters (short version). */

int main() {
    int c;
    int char_count[MAX_CHAR];

    // Initialize elements of 'char_count' to be 0
    for (int i = 0; i < MAX_CHAR; ++i) {
        char_count[i] = 0;
    }

    // Read characters until EOF is triggered
    while ((c = getchar()) != EOF) {
        // Check if character is in ASCII
        if (c < MAX_CHAR) {
            // Add one if it is
            ++char_count[c];
        }
    }

    // Print horizontal histogram
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (char_count[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < char_count[i]; ++j) {
                printf("+");
            }
            printf("\n");
        }
    }

    return 0;
}