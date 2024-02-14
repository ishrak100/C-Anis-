#include<stdio.h>
void main()
{

 char c;
 scanf("%c",&c);
 if(c>='a'&&c<='z')
        printf("Small Letter");
 else if(c>='A'&&c<='Z')
    printf("Capital Letter");
 else printf("None");



}
