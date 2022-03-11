#include <stdio.h>

int main(void)
{
    int c;
    int count = 0;

    while ((c = getchar()) != EOF)
        if ( (c == '\n') || (c == '\t') || (c == ' ') )
            ++count;

    printf("%d\n", count);

    return 0;
}
