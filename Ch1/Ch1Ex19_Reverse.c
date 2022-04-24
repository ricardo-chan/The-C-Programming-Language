#include <stdio.h>

#define MAXLINE 1000      /* Maximum input line size */

int krgetline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char original[], char reversed[], int length);

/* Print line and reversed line */
int main(void)
{
    int len;                         /* Current line length */
    char line[MAXLINE];              /* Current input line  */
    char reversed_line[MAXLINE];     /* Reversed line       */

    while((len = krgetline(line, MAXLINE)) > 0){
        reverse(line, reversed_line, len);
        printf("Original: %s", line);            /* Printing line without reversing */
        printf("Reversed: %s", reversed_line);   /* Printing reversed line          */
    }

    return 0;
}

/* getline: read a line into s, return length */
int krgetline(char line[], int maxline)
{
    int c, i;

    for (i = 0; (i < maxline - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }

    /* If the last char before \n\x0 is a blank then the length of the line is decremented until all blanks are gone */
    /* while (i > 0 && (line[i - 2] == ' ' || line[i - 2] == '\t')) { */
    /*     --i; */
    /*     line[i - 1] = '\n'; */
    /* } */

    line[i] = '\0';

    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}

void reverse(char original[], char reversed[], int length)
{
    for (int i = length; i > 0; --i) {
        reversed[length - i] = original[i - 2];
    }

    reversed[length - 1] = '\n';
    reversed[length] = '\0';
}
