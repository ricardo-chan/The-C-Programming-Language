#include <stdio.h>

// Print Fahrenheit-Celsius table
int main()
{
    float fahr;
    float celsius;
    int lower = -20;     // Lower limit of temperature table
    int upper = 300;   // Upper limit of temperature table
    int step  = 20;    // Step size

    celsius = lower;

    printf("***********\n");
    printf("| ºC    F |\n");
    printf("***********\n");
    while (celsius <= upper){
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
