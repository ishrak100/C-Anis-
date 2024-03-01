#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    int *ptr;
    ptr = &x;

    printf("%d\n", *ptr);

    ptr = &y;
    printf("%d\n", *ptr);
}