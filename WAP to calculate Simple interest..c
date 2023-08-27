#include<stdio.h>  
 int interest(float, float, float);
void main()   
    {      
        printf("\n\n Simple Interest is : %f",interest(34,10,5));    
    } 
int interest(float p,float r,float t)
{
    int res;
    res=(p*r*t)/100;
    return res;
}