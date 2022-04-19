#include <stdio.h>

#define MAXLINE 1000      /* Maximum input line size */

int krgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
int main(void)
{
    int len;                /* Current line length */
    int max = 0;                /* Maximum length seen so far */
    char line[MAXLINE];     /* Current input line */
    char longest[MAXLINE];  /* Longest line saved here */

    while((len = krgetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }

    if (max > 0)      /* There was a line */
        printf("Length: %d, %s\n", max, longest);   /* Printing length and content of line */

    return 0;
}

/* getline: read a line into s, return length */
int krgetline(char line[], int maxline)
{
    int c, i;

    for (i = 0; (i < maxline - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

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
