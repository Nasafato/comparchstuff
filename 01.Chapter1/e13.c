#include <stdio.h>

main()
{
    int c, i, wordLength;
    int lengths[20];

    wordLength = 0;

    for (i = 0; i < 20; ++i)
        lengths[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++lengths[wordLength];
            wordLength = 0;
        }
        else
            ++wordLength;
    }
    
    for (int j = 0; j < 20; ++j){
        printf("--");
        if(j == 19)
            printf("\n");
    }

    for (i = 0; i < 20; ++i) {
        printf("%d\t", i);
        for (int j = 0; j < lengths[i]; ++j)
            printf("=");
        printf("\n");
    }

    for (int j = 0; j < 20; ++j){
        printf("--");
        if(j == 19)
            printf("\n");
    }
}
