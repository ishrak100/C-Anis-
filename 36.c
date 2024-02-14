#include<stdio.h>
void main()
{
  int n,temp,rem,s=0;
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
    rem=temp%10;
    s=s*10+rem;
    temp=temp/10;
  }

  printf("%d",s);
}


