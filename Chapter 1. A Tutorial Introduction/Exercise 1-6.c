/*
Exercise 1-6:
Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        puts("getchar() != EOF is 1");
    }
    puts("getchar() != EOF is 0");

    return 0;
}