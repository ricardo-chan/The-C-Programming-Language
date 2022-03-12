#include <stdio.h>

#define IN  1     // Inside a word
#define OUT 0     // Outside a word

// Count lines, words and characters in input
/* Tests done:
 *   1) N words and N lines
 *   2) Only new lines
 *   3) One letter words
 *   4) Only blanks
 *   5) Several blanks between words
 *   6) Using special symbols and characters
*/
int main(void){

    int c;
    int newline = 0;
    int newword = 0;
    int newchar = 0;
    int state   = OUT;

    while ((c = getchar()) != EOF){
        ++newchar;

        if(c == '\n')
            ++newline;

        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++newword;
        }
    }

    printf("Lines\tWords\tCharacters\n");
    printf("%d\t%d\t%d\n", newline, newword, newchar);

    return 0;
}
