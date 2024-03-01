#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    int *ptr1,*ptr2;
    ptr1 = &x;
    ptr2=&y;
    printf("%d",*ptr1+*ptr2);
}