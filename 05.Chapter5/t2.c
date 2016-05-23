#include <stdio.h>

void wrong_swap(int x, int y);
void swap(int *px, int *py);

main()
{
    int x = 1, y = 2;
    wrong_swap(x, y);

    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);

}

void wrong_swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
    printf("wrong_swap: x = %d, y = %d\n", x, y);

}

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
    printf("swap: x = %d, y = %d\n", *px, *py);
}
