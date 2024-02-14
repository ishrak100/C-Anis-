#include<stdio.h>
float power(float base,float exp)
{float i, result=1;
   for(i=1;i<=exp;i++)
   {
    result=result*base;
   }

    printf("%f",result);

}int main()
{


power(2,5);
}
