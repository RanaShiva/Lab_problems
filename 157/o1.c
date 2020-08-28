/*
Q8.Evaluate the following expression Assume, int a = 10, b=20,c=5,e=2; float q =2.5, d=4.5;
 i) a/b + (a/(2*b))
 ii) f = ++a + b-- / q find value of f, a, and b 
 ii) G = b%a++; find value of G and a
  iv) H = b%++a; find value of H and a 
  v)  a+2 < b || !c && a==d || a-2 <=e
*/

#include<stdio.h>
int main()
{
  int a=10, b=20, c=5, e=2;
  float q=2.5, d=4.5;
  printf("%d\n",a/b+(a/(2*b)));
  printf("%f\n",++a+b--/q);
  a=10,b=20;
  printf("%d\n",b%a++);
  a=10;
  printf("%d\n",b%++a);
  a=10;
  printf("%d\n",a+2<b || !c&&a==d || a-2<=e);  
  return 0;
}