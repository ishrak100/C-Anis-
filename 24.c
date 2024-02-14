#include <stdio.h>
void main()
{
   int y;
   scanf("%d", &y);
   if (y % 400 == 0)
      printf("Ly");
   else if (y % 4 == 0 && y % 100 != 0)
      printf("Ly");
   else
      printf("Not Ly");
}
