/*
Exercise 1-15:
Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/

#include <stdio.h>

// Declaration of convert_to_celsius() function that expects one float argument as in input
float convert_to_celsius(float);

int main() {
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit-Celsius Table\n");
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, convert_to_celsius(fahr));
        fahr = fahr + step;
    }
}

// convert_to_celsius() implementation
float convert_to_celsius(float fahr) {
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}