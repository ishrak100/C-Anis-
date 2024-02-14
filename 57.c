#include<stdio.h>
void main()
{
   char str1[50]= "CSEDU is ";
   char str2[]= "great";
   int i=0,len=0,j=0;

 while(str1[i]!='\0')
{
  i++;
  len++;
}
while(str2[j]!='\0')
{
   str1[len+j]=str2[j];
   j++;
}
printf("%s",str1);



}
