#include <stdio.h>
void swapping(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x = 10, y = 20;
    swapping(&x, &y);
    printf("%d\n%d", x, y);
}