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
    printf("maximum Value: %d\n",(a>b)?((a>c)?a:c):((b>c)?b:c));


}