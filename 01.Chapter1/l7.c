#include <stdio.h>

main()
{
    int character, blank, tab, newline;

    blank = 0;
    tab = 0;
    newline = 0;

    while ((character = getchar()) != EOF){
        if (character == ' '){
            ++blank;
        }
        if (character == '\n'){
            ++newline;
        }
        if (character == '\t'){
            ++tab;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blank, tab, newline);
}

{
    int character, blank, tab, newline;

    blank = 0;
    tab = 0;
    newline = 0;

    while ((character = getchar()) != EOF){
        if (character == ' '){
            ++blank;
        }
        if (character == '\n'){
            ++newline;
        }
        if (character == '\t'){
            ++tab;
        }
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blank, tab, newline);
}
