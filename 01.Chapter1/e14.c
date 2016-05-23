#include <stdio.h>

main()
{
    int c;
    int frequencies[26];     

    for (int i = 0; i < 26; ++i) {
        frequencies[i] = 0;
    }

    for (int i = 0; i < 200; ++i) {
        if (i == 'a')
            printf("%d\n", i);
        if (i == 'b')
            printf("%d\n", i);
        if (i == 'z')
            printf("%d\n", i);
    }

    while ((c = getchar()) != EOF) {
        if (c >= 97 && c <= 122)
            ++frequencies[c - 97];
    }

    for (int i = 0; i < 26; ++i) {
        printf(" %d", frequencies[i]);
    }
    

}
