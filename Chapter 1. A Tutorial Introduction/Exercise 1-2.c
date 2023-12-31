/*
Exercise 1-2:
Experiment to find out what happens whenn printf's argument string contains \c, where c is some character not listed above.
*/

#include <stdio.h>

int main() {

    /* 
    printf("hello, world\n");
    In general, the warning about the unknown escape sequence will appear.
    In C, the backslash '\' is interpreted as is used as an escape character,
    which instructs the compiler to interpret the character(s) following it differently than if they were used alone.
    */
    return 0;
}