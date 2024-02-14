#include<stdio.h>
void main()
{
  char str1[]="Ishrak Faisal";
  char str2[500];
  int i=0,j,len=0;
  while(str1[i]!='\0')
  {
      i++;
      len++;
  }
  for(j=0,i=len-1;i>=0;i--,j++)
  {
    str2[j]=str1[i];




  }

   printf("%s",str2);




}
