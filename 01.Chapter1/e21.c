#include <stdio.h>

#define TABSTOP 8
#define BLANK 1
#define WORD 0


void replace_blanks(int char_count, int blank_count);

main()
{
    int c, char_count, blank_count;
    int state = WORD;

    char_count = blank_count = 0;
    
    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            if (state == WORD)
                state = BLANK; 
            ++blank_count;
        } else {
            if (state == BLANK) {
                replace_blanks(char_count, blank_count);
                state = WORD;
            }
            if (char_count == TABSTOP)
               char_count = 0; 
            ++char_count;
            printf("%d", char_count);
        }
    }
}

void replace_blanks(int char_count, int blank_count) {
    printf("%d\t%d", char_count, blank_count);
}

        
