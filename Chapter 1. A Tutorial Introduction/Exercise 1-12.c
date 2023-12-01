/*
Exercise 1-12:
Write a program that prints its input one word per line.
*/

#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        // Case 1: Escape triggered (currently outside of the word)
        if (c == ' ' || c == '\t' || c == '\n') {
            // If inside the word
            if (state == IN) {
                // Print newline
                putchar('\n');
                // Change the flag to OUT (false)
                state = OUT;
            }
        // Case 2: Escape not triggered (currently inside of the word)
        } else {
            // If outside of the word
            if (state == OUT) {
                // Change the flag to IN (true)
                state = IN;
            }
        // Print input character to stdout
        putchar(c);
        }
    }

    return 0;
}
