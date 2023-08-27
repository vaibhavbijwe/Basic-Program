#include<stdio.h>
void main()
{
int a,b,c,d,e,total;
    printf("Enter a First Sub Marks:");
    scanf("%d",&a);
    printf("Enter a Second Sub Marks:");
    scanf("%d",&b);
     printf("Enter a Third Sub Marks:");
    scanf("%d",&c);
    printf("Enter a Fourt Sub Marks:");
    scanf("%d",&d);
    printf("Enter a Five Sub Marks:");
    scanf("%d",&e);

    total=a+b+c+d+e;
    printf("Total Marks %d",&total);
    printf("Average %d",total/100);
    
}