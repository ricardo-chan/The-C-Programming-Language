#include <stdio.h>

// Copy input to output; 1st version

int main()
{
    int c;

    c = getchar();

    while (c != EOF){
        putchar(c);
        c = getchar();
        printf("\nResult: %d\n", c != EOF); //Verifying that c != EOF is 1 or 0
    }

    return 0;
}
