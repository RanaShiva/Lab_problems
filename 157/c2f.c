/*Q6.WACP to convert temperature in Celsius into temperature in Fahrenheit.
*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&c);
    f=9*c/5.0 + 32;
    printf("Temperature in farenheit: %0.2f",f);
    return 0;
}