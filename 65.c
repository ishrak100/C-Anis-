#include<stdio.h>
void main()
{
 char str[50];
 int i,capital,small,digit;
 gets(str);
i=capital=small=digit=0;
while(str[i]!='\0')
 {
   if(str[i]>= 65&& str[i]<=90)

    capital++;

  else  if(str[i]>=97 && str[i]<=122)
    small++;

 else  if(str[i]>=48 && str[i]<=57)
    digit++;
 i++;

 }

  printf("%d\n",capital);
printf("%d\n",small);

printf("%d\n",digit);



}
