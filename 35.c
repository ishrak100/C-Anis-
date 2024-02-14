#include<stdio.h>
void main()
{
  int n1,n2,num1,num2,GCD,LCM,rem;
  scanf("%d%d",&num1,&num2);
  n1=num1;
  n2=num2;
 while(n2!=0)
 {rem=n1%n2;
 n1=n2;
 n2=rem;



 }

 GCD=n1;
 LCM=(num1*num2)/GCD;
 printf("%d\n",GCD);
 printf("%d",LCM);


}
