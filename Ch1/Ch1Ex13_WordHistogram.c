#include <stdio.h>

#define IN  1     // Inside a word
#define OUT 0     // Outside a word
#define MAXLENGTH 15 // Maximum wordlength counted (for simplicity)

// Pring histogram with word length on input
// Bug found: Special characters count as 2, possible fix is set locale
int main(void){

    int c;
    int newchar = 0;
    int state   = OUT;
    int wordlengths[MAXLENGTH];
    int maxwordsinlength = 0;

    for (int i = MAXLENGTH - 1; i >= 0; --i)
        wordlengths[i] = 0;

    while ((c = getchar()) != EOF){
        ++newchar;

        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;

            if((newchar > 0) && (newchar <= MAXLENGTH))
                ++wordlengths[newchar - 1]; // newchar - 1 because we are not interested in 0 length words
        }
        else if (state == OUT){
            state = IN;
            newchar = 0;
        }
    }

    printf("Horizontal histogram\n");
    for(int i = 1; i <= MAXLENGTH; ++i){
        if(wordlengths[i - 1] == 0)
            continue;

        printf("Word Length %d: ", i);

        for(int j = 1; j <= wordlengths[i - 1]; ++j)
            printf("|");

        printf("\n\n");

        if(maxwordsinlength < wordlengths[i - 1])
            maxwordsinlength = wordlengths[i - 1];
    }

    printf("Vertical histogram\n");
    for(int i = maxwordsinlength; i > 0; --i){
        for(int j = 0; j < MAXLENGTH; ++j){
            if(wordlengths[j] < i){
                printf("   ");
                continue;
            }

            printf(" _ ");
        }

        printf("\n");

        if (i == 1){
            for(int s = 1; s <= MAXLENGTH; ++s){
                printf(" %d ", s);
            }

            printf("\n");
        }
    }

    return 0;
}
