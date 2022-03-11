#include <stdio.h>

int main(void)
{
    int c;
    int count = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++count;
            if (count > 1)
                continue;
        }
        else{
            count = 0;
        }

        putchar(c);
    }

    return 0;
}
