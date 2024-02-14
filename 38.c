#include<stdio.h>
void main()
{
    int n,i,f,rem,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
      rem=temp%10;
      f=1;
      for(i=1;i<=rem;i++)
      {
        f=f*i;
      }
    s=s+f;
    temp=temp/10;

    }
  if(s==n)
        printf("Strong num");
  else printf("Not Strong");



}
