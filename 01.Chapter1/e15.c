#include <stdio.h>

float fahrToCelsius(int fahr)
{
    return 5.0/9 * (fahr - 32);
}

main()
{
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        printf("%d\t%4.1f\n", fahr, fahrToCelsius(fahr));
    }
}


