#include <stdio.h>

int any(char s1[], char s2[]);

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("error\n");
    else
        printf("%d\n", any(argv[1], argv[2]));

    return 0;
}

int any(char s1[], char s2[])
{
    int i, j, k;

    for (i  = 0; s1[i] != '\0'; ++i) 

        for (j = 0; s2[j] != '\0'; ++j)

            if (s1[i] == s2[j]) 
                return i;
    return -1;

} 
