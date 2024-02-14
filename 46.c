#include<stdio.h>
void main()
{
  int i,j,A[2][2],B[2][2],C[2][2];


 for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {  printf("A[%d][%d] = ",i,j);
     scanf("%d",&A[i][j]);

   }
    printf("\n");
  }



 for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {  printf("B[%d][%d] = ",i,j);
     scanf("%d",&B[i][j]);

   }
    printf("\n");
  }

  printf("A = ");
 for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {
     printf("%d ",A[i][j]);

   }

printf("\n");
  }
   printf("B = ");
 for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {
     printf("%d ",B[i][j]);

   }
  printf("\n");
  }

for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {
     C[i][j]=A[i][j]+B[i][j];

   }

  }



printf("C = ")
 for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)

     {
     printf("%d ",C[i][j]);

   }
printf("\n");
  }





}
