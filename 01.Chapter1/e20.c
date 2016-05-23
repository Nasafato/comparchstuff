#include <stdio.h>
#define TABSTOP 5

main()
{
    int c, char_count;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            for (int i = 0; i < TABSTOP-char_count; ++i)
                putchar(' ');
        else
            if (char_count == TABSTOP)
                char_count = 0;
            ++char_count;
            putchar(c);
    }
}
