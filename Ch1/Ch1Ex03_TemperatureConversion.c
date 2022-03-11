#include <stdio.h>

// Print Fahrenheit-Celsius table
int main()
{
    float fahr;
    float celsius;
    int lower = 0;     // Lower limit of temperature table
    int upper = 300;   // Upper limit of temperature table
    int step  = 20;    // Step size

    fahr = lower;

    printf("**********\n");
    printf("| F   ºC |\n");
    printf("**********\n");
    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
