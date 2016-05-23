#include <stdio.h>
#define MAXLINE 1000

int nextline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{

    int currLength;
    int maxLength;
    char line[MAXLINE];
    char max[MAXLINE];

    while ((currLength = nextline(line, MAXLINE)) > 0) 
        if (currLength > maxLength) {
            maxLength = currLength;
            copy(max, line);
        }

    if (maxLength > 0)
        printf("size: %d\t%s\n", maxLength, max);

    return 0;
}

int nextline(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    while ((c = getchar()) != EOF && c != '\n')
        ++i;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
    
    
    
