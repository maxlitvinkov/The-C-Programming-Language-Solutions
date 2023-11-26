/*
Exercise 1-8: 
Write a program to count blanks, tabs and newlines.
*/

#include <stdio.h>

int main() {
    int c;
    int b = 0;    // blanks counter 
    int t = 0;    // tabs counter
    int nl = 0;   // newlines counter

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++b;
        else if (c == '\t')
            ++t;
        else if (c == '\n')
            ++nl;
    }

    printf("Blanks count: %d\n", b);
    printf("Tabs count: %d\n", t);
    printf("Newlines count: %d\n", nl);

    return 0;
}