#include <stdio.h>
void main()
{
  int a = 1, b = 2, s = 0, n1, n2;
  scanf("%d%d", &n1, &n2);
  while (a <= n1 && b <= n2)
  {
    s = s + a * b;
    a++;
    b++;
  }

  printf("%d", s);
}
