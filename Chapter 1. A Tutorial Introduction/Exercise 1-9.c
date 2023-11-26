/*
Exercise 1-9:
Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main() {
    int c;
    int last_blank = 0;  // initialize the flag to be 'false' or 0

    while ((c = getchar()) != EOF) {
        // if the observed character is a 'blank'
        if (c == ' ') {
            // and if the flag is set to 0
            if (!last_blank) {
                // print the 'blank' but set the flag to 1
                putchar(c);
                last_blank = 1;  
            }
        }
        // if the observed character is not 'blank', set the flag to 0
        else {
            putchar(c);
            last_blank = 0;
        }
    }

    return 0;
}