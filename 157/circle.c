/*Q3.WACP to find diameter, area and perimeter of a circle.*/
#include<stdio.h>
#define PI 3.14
int main()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    printf("The diameter: %0.2f\n", 2*r);
    printf("Area: %0.2f\n",PI*r*r);
    printf("The circumference of cirlce: %0.2f", 2*PI*r);
    return 0;
}