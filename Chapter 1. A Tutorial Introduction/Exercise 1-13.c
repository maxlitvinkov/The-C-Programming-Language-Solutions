/*
Exercise 1-13:
Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal;
a vertical orientation is more challenging.
*/

#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX_LENGTH 20

// Assume horizontal histogram
int main() {
    int c, state, length;
    int word_lengths[MAX_LENGTH];    /* Create array of length MAX_LENGTH */

    // Initialize 'state' to be OUT (false) and 'length' to be 0
    state = OUT;
    length = 0;

    // Initialize elements of 'word_lengths' to be 0
    for (int i = 0; i < MAX_LENGTH; ++i) {
        word_lengths[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            // If previously inside the word
            if (state == IN) {
                // Then change the state to the OUT
                state = OUT;
                // If current word length is not larger than the limit
                if (length <= MAX_LENGTH && length > 0) {
                    // Increase the corresponding element of array by one
                    ++word_lengths[length - 1];
                }
                // Set the value of 'length' back to 0
                length = 0;
            }
        }
        else {
            state = IN;
            ++length;
        }
    }

    // Treat condition when EOF is triggered inside the word
    if (length != 0 && length <= 20) {
        ++word_lengths[length - 1];
        length = 0;
    }

    // If the last character is not newline, print newline for better readability
    if (c != '\n') {
        printf("\n");
    }

    // Print horizontal histogram
    for (int i = 0; i < MAX_LENGTH; ++i) {
        printf("%2d: ", i + 1);
        for (int j = 0; j < word_lengths[i]; ++j) {
            printf("+");
        }
        printf("\n");
    }

    return 0;
}