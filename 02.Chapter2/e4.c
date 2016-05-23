#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(int argc, char **argv)
{
    if (argc == 1)
        printf("error\n");
    else
        squeeze(argv[1], argv[2]);
   
    return 0;

}

void squeeze(char s1[], char s2[])
{
    int i, j, curr, match;
    
    for (i = j =curr = 0; s1[i] != '\0'; ++i) {
        match = 0;
        while (s2[j] != '\0' && match == 0) {
            if (s1[i] == s2[j])
                match = 1;
            else
                ++j;
        }
        if (match == 0)
            s1[curr++] = s1[i];
    }
    s1[curr] = '\0';
}


