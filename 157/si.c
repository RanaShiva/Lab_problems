/* Q1.WACP to which takes p,t,r as input and compute the simple interest and display the result.
*/
#include<stdio.h>
int main()
{
    int t;
    float p, r, si;
    printf("Enter the principal, rate and time respectively: ");
    scanf("%f%f%d",&p,&r,&t);
    si = (p*r*t)/100;
    printf("The simple interest is: %0.2f",si);
    return 0;
}