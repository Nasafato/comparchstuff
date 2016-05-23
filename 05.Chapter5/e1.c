#include <stdio.h>
#include <ctype.h>

#define MAX 10

int getch(void);
int getint(int *pn);
void ungetch(int c);

int main(void)
{
    int i, num[MAX];
    int val;

    for (i = 0; i < MAX && (val = getint(&num[i])) != EOF; i++)
        printf("num[%d] = %d, \tvalue returned: %d (%s)\n", i, num[i], 
                val, val != 0 ? "number" : "not a number");

    return 0;
}

/* getint:  get next integer from input into *pn */
int getint(int *pn)
{
    int c, sign;
    while (isspace(c = getch()))   /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);  /* it is not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c; 
}

int bufp = 0;
int buf[MAX];

int getch(void)     /* get a possibly pushed-back character */
{
    return (bufp > 0) ? buf[--bufp]: getchar();
}

void ungetch(int c) /* push character back on input */
{
    if (bufp < MAX)
        buf[bufp++] = c;
}



