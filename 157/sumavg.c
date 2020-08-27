/*Q5.WACP to find sum and average of three given numbers.
*/
#include<stdio.h>
int main()
{
    int a,b,c, sum=0;
    float avg;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3.0;
    printf("The sum: %d\n",sum);
    printf("The average: %0.2f",avg);
    return 0;
}