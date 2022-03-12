#include <stdio.h>

#define IN  1     // Inside a word
#define OUT 0     // Outside a word

// Printing one word per line
int main(void){

    int c;
    int state = OUT;

    while ((c = getchar()) != EOF){
        if((state == IN) && (c == ' ' || c == '\t')){
            state = OUT;
            putchar('\n');
        }
        else if ((state == OUT) && (c == ' ' || c == '\t')){
            continue;
        }
        else if (state == OUT){
            state = IN;
            putchar(c);
        }
        else{
            putchar(c);
        }
    }

    return 0;
}
