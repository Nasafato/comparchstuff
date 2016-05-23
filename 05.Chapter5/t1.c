#include <stdio.h>

main()
{
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    printf("%p\n", ip);

    y = *ip;
    printf("%d\n", y);
    
    //++ip;
    //printf("%p\n", ip);

    *ip = 0;
    printf("%d\n", *ip);
    
    ip = &z[0];
    printf("%p\n", ip);

}
