#include <stdio.h>

#define MAXLINE 1000      /* Maximum input line size */
#define MAXPRINT 50       /* Amount of lines that can be printed */

int krgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
int main(void)
{
    int len;                         /* Current line length */
    char line[MAXLINE];              /* Current input line */

    while((len = krgetline(line, MAXLINE)) > 0)
        printf("%d, %s", len, line);    /* Printing line with length to show that trailing blanks are removed */

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
    while (i > 0 && (line[i - 2] == ' ' || line[i - 2] == '\t')) {
        --i;
        line[i - 1] = '\n';
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
