#include <stdio.h>

int main()
{
    int lim = 100;
    int c;
    int i;
    char s[lim];

    for (i=0; i < lim-1; ++i) {
        if ((c=getchar()) == '\n')
            i = lim-1;
        else if (c == EOF)
            i = lim-1;
        else
            s[i] = c;

    }

    s[i] = '\0';

    return 0;
}
