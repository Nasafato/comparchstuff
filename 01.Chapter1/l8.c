#include <stdio.h>

main()
{
    int c, blankCounter;

    blankCounter = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' '){
            if (blankCounter > 0){
                putchar(' ');
                blankCounter = 0;
            }
            putchar(c);
        }
        if (c == ' ')
            ++blankCounter;
    }
}

