#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -30;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius-Fahrenheit Table\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius - 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}