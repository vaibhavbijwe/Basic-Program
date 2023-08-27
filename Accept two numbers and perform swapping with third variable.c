#include<stdio.h>
void main()
{
int a,b,c;
    printf("Enter a First No:");
    scanf("%d",&a);
    printf("Enter a Second No:");
    scanf("%d",&b);
     printf("Enter a Third No:");
    scanf("%d",&c);
    c=a;
    a=b;
    c=a;
    printf("%d",c);


}