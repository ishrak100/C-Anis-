#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    int *ptr1,*ptr2;
    ptr1 = &x;
    ptr2=&y;
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d\n%d",x,y);
}