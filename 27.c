#include<stdio.h>
void main()
{
 float m;
 scanf("%f",&m);
 if(m>=80&&m<=100)
    printf("A+");
 else if(m>=70)
    printf("A");
 else if(m>=60)
    printf("A-");
 else printf("Fail");
getch();


}
