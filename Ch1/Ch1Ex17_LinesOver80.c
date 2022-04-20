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
    char longer[MAXPRINT][MAXLINE];  /* Longest line saved here */
    int i = 0;                       /* Counter for lines longer than 80 */

    while((len = krgetline(line, MAXLINE)) > 0)
        if (len > 79) {
            copy(longer[i], line);
            ++i;
        }


    for(int j = 0; j < i; ++j) {
        printf("%s",longer[j]);   /* Printing content of line */
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
