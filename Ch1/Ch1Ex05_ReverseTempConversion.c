#include <stdio.h>

// Print Fahrenheit - Celsius table in reverse
int main()
{
    printf("***********\n");
    printf("* F    ºC *\n");
    printf("***********\n");

    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    return 0;
}
