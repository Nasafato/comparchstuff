#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix_ {
    int * array;
    int rows;
    int columns;
} Matrix;

void fcreateMatrix(FILE *fp, Matrix * m1, Matrix * m2)
{
    size_t numchars = 100;
    char *buffer = malloc(numchars + 1);

    int r;
    int c;

    char s[3] = "\t\n";
    char * token;
    int i = 0;

    fgets(buffer, numchars, fp);
    sscanf(buffer, "%d %d", &r, &c);

    m1->array = malloc(r * c * sizeof(int));
    m1->rows = r;
    m1->columns = c;

    m2->array = malloc(r * c * sizeof(int));
    m2->rows = r;
    m2->columns = c;

    while (fgets(buffer, numchars, fp) != NULL) {
        if (*buffer == '\n')
            break;
        if ((token = strtok(buffer, s)) == NULL)
            break;
        else
            while (token != NULL) {
                m1->array[i] = atoi(token);
                token = strtok(NULL, s);
                i++;
            }
    }

    i = 0;
    while (fgets(buffer, numchars, fp) != NULL) {
        token = strtok(buffer, s);
        while (token != NULL) {
            m2->array[i] = atoi(token);
            token = strtok(NULL, s);
            i++;
        }
    }
    
}


