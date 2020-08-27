/*Q4.WACP to find area and perimeter of a rectangle.
*/
#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the lenght and breadth of rectangle respectively: ");
    scanf("%d%d",&l,&b);
    printf("The area of rectangle: %d\n", l*b);
    printf("The perimeter of rectangle: %d", 2*(l+b));
    return 0;
}