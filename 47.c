#include<stdio.h>
void main()
{
  int r1,r2,c1,c2,i,j,k,A[10][10],B[10][10],C[10][10],sum=0;

  scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);

 while(c1!=r2)
  {printf("Error!");
   scanf("%d%d",&r1,&c1);
   scanf("%d%d",&r2,&c2);


  }

 for(i=0;i<r1;i++)
  {

    for(j=0;j<c1;j++)
     {

      printf("A[%d][%d] = " ,i,j);
      scanf("%d",&A[i][j]);

     }


    printf("\n");




 }

 for(i=0;i<r2;i++)
  {

    for(j=0;j<c2;j++)
     {

      printf("B[%d][%d] = ",i,j);
      scanf("%d",&B[i][j]);

     }


    printf("\n");

  }
 printf(" A = ");
 for(i=0;i<r1;i++)
  {

    for(j=0;j<c1;j++)
     {


      printf("%d ",A[i][j]);

     }


    printf("\n");




 }

 printf(" B = ");
 for(i=0;i<r2;i++)
  {

    for(j=0;j<c2;j++)
     {


      printf("%d ",B[i][j]);

     }


    printf("\n");




 }

 for(i=0;i<r1;i++)

 {

   for(j=0;j<c2;j++)
   {
     for(k=0;k<c1;k++)
      {
       sum=sum+A[i][k]*B[k][j];



      } C[i][j]=sum;
       sum=0;

   }

 }


 printf(" C = ");
 for(i=0;i<r1;i++)
  {

    for(j=0;j<c2;j++)
     {


      printf("%d ",C[i][j]);

     }


    printf("\n");




 }




}
