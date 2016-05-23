#include <stdio.h>
#include <ctype.h>


long htoi(char s[]);

main()
{
    int c;
    char s[10];
    for (int i = 0; i < 10; ++i) {
       s[i] = 'f';
    }
    printf("%ld\n", htoi(s)); 

}

long htoi(char s[])
{
    int  n, i, thisvalue, hexvalue, startIndex;
    startIndex = 0;
    int counter = 0;
    hexvalue = 0;
    n = 0;

    if (s[1] == 'x' || s[1] == 'X')
        startIndex = 2;

    for (int i = startIndex; s[i] != '\0'; ++i) {
        if (counter == 2)
            counter = 0;
        counter++;
        printf("%d\t", counter);

        if (s[i] >= 'a' && s[i] <= 'f') {
            thisvalue  = s[i] - 'a' + 10;
            printf("%c\t%d\t%d\n", s[i], s[i], thisvalue);
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
            thisvalue = s[i] - 'A' + 10;
        else
            thisvalue = s[i] - '0';
        
        if (counter == 1) {
            hexvalue = 16 * thisvalue;
            printf("\t%d\n", hexvalue);
        } 
        else {
            hexvalue = hexvalue + thisvalue;
            printf("\t%d\n", hexvalue);
        }

        if (counter == 2) {
            if (hexvalue >= 100)
                n = n * 1000 + hexvalue;
            else if (hexvalue >= 10)
                n = n * 100 + hexvalue;
            else
                n = n * 10 + hexvalue;
        }
        printf("\t\t%ld\n", n);
    }

    return n;
}
    
    




    
