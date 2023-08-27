#include<stdio.h>
void main()
{
    float c, f =10;
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("%f Fahrenheit = %f Celsius", f, c);
}
