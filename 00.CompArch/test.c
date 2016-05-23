#include "test.h"
#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    
    if (n <= 0) {
        printf("error\n");
        exit(1);
    }

    if (n == 1 || n == 2) return 1;


    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char** argv) {
    
    int val;

    printf("value of valu is %d\n", val);

    if (argc < 3) {
        printf("error\n");
    }

    printf("Value of argc is %d\n", argc);

    printf("First argv is %s\n", argv[0]);

    printf("Second argv is %s\n", argv[1]);

    printf("Third argv is %s\n", argv[2]);

    return 0;
}
