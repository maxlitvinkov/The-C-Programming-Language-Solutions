#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        puts("getchar() != EOF is 1");
    }
    puts("getchar() != EOF is 0");

    return 0;
}