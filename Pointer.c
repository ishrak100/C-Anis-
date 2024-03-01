#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d\n", x);
    printf("%u\n%x\n%o", &x, &x, &x);
    return 0;
}