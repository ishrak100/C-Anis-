#include<stdio.h>
void main()
{
 float a,b,c,d,x1,x2;
 scanf("%f%f%f",&a,&b,&c);
 d=sqrt(b*b-4*a*c);
 x1=(-b+d)/(2*a);

 x2=(-b-d)/(2*a);

 printf ("%0.0f\n%f",x1,x2);

}
