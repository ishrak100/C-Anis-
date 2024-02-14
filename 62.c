#include<stdio.h>
void main()
{
  char a[]="CSE";
  char b[]="EEE";
  char c[100];
   strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
   printf("%s\n%s",a,b);

}
