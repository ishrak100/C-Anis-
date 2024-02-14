#include<stdio.h>
void main()
{int array1[3]={1,2,3},array2[3],i;
for(i=0;i<3;i++)
{
  printf("%d ",array1[i]);


}

for(i=0;i<3;i++)
{
 array2[i]=array1[i];


}
printf("\n");
for(i=0;i<3;i++)

  printf("%d ",array2[i]);


}
