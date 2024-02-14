#include<stdio.h>
void main()
{
 int mark[10],i,s=0;
 for(i=0;i<=9;i++)
 {
   scanf("%d",&mark[i]);
 }

  for(i=0;i<10;i++)
  {
      s=s+mark[i];
  }
  float avg;
  avg=s/10.0;
  printf("%f",avg);

}
