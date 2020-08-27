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