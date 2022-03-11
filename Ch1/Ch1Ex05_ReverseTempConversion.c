#include <stdio.h>

#define LOWER 0         // Lower limit of table
#define UPPER 300       // Upper limit of table
#define STEP  20        // Step size

// Print Fahrenheit - Celsius table in reverse with symbolic constants
int main()
{
    printf("***********\n");
    printf("* F    ºC *\n");
    printf("***********\n");

    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    return 0;
}
