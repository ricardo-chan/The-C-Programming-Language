#include <stdio.h>

// Pring character frequency histogram
int main(void)
{
    int c;
    int charfreq[128];    // Printable character range

    printf("Insert a string of characters and CTRL+D when done to generate histogram\n");
    for (int i = 0; i < 128; ++i)
        charfreq[i] = 0;

    while ((c = getchar()) != EOF){
        ++charfreq[c];        // Add frequency to given char
    }

    printf("******** Histogram ********\n");
    for(int i = 0; i < 128; ++i){
        if(charfreq[i] == 0)
            continue;        // Do nothing if frequency is 0

        printf("char %3d: ", i);

        for(int j = 0; j < charfreq[i]; ++j)
            printf("|");     // Printing histogram

        printf("\n");
    }

    return 0;
}
