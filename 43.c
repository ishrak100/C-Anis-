#include<stdio.h>
void main()
{


    int num[6]={1,2,3,4,5,6},pos=-1,value,i;
    scanf("%d",&value);

  for(i=0;i<6;i++)
  {
      if(value==num[i])
     {

       pos=i;
      break;}

  }
 if(pos==-1) printf("Not found");
 else printf("%d",pos);



}




