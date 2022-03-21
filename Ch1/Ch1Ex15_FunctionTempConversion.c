#include <stdio.h>

#define LOWER 0      // Lower limit of temperature table
#define UPPER 300    // Upper limit of temperature table
#define STEP 20      // Step size

float fahr_to_celsius(float fahr_p); // Function declaration

// Print Fahrenheit-Celsius table using a function
int main(void)
{
    float fahr;
    float celsius;

    fahr = LOWER;

    printf("This program uses a function for returning the celsius value\n");
    printf("**********\n");
    printf("| F   ºC |\n");
    printf("**********\n");
    while (fahr <= UPPER){
        celsius = fahr_to_celsius(fahr);        // Using function return value in celsius variable
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += STEP;
    }

    return 0;
}

// Function definition
float fahr_to_celsius(float fahr_p)
{
    return (5.0 / 9.0) *  (fahr_p - 32.0);
}
