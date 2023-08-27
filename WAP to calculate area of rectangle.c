#include<stdio.h>
void main()
{
    int l,b,h;
    printf("Enter a length of rectangle");
    scanf("%d",&l);
    printf("Enter a Breath of rectangle");
    scanf("%d",&b);
    printf("Enter a Height of rectangle");
    scanf("%d",&h);
    l=l*b*h;
    printf("area of rectangle: %d",l);

    
}