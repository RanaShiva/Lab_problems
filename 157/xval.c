/*Q2.What is the value of x in the following code segments? Justify your answers. 
 int a,b; float x;
  a=4; b=5; x=b/a; x = (float) b/a;*/
#include<stdio.h>
int main()
{
    int a,b; 
    float x;
    a=4,b=5;
    x=b/a;
    printf("%f\n",x);
    x=(float)b/a;
    printf("%f",x);
    return 0;
}