/*Q7.Write a C program that computes the size of int, float, double and char variables.
*/
#include<stdio.h>
int main()
{
    printf("Size of integer: %d\n",sizeof(int));
    printf("Size of char: %d\n",sizeof(char));
    printf("Size of float: %d\n",sizeof(float));
    printf("Size of double: %d",sizeof(double));
    return 0;
}