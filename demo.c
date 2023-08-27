#include<stdio.h>
int add(int ,int );
void main()
{
    printf("Addition of Two No %d",add(5,5));
}
int add(int a, int b)
{
    int res;
    res=a+b;
    return res;
}
