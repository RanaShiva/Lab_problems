#include<iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<"Sum: "<<a+b;
}
void sub(int a, int b)
{
    cout<<"Subtraction: "<<a-b;
}
void mul(int a, int b)
{
    cout<<"Multiplication: "<<a*b;
}
void division(int a, int b)
{
    if(b!=0)
    {
        cout<<"Division: "<<a/b;
    }
    else
    {
        cout<<"Division not possible!";
    }
    
}
int main()
{
    int ch, a, b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"1 - Sum"<<endl<<"2 - Subtraction"<<endl<<"3 - Multiplication"<<endl<<"4 - Division"<<endl<<endl<<"Enter your choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1: sum(a,b);
        break;
    case 2: sub(a,b);
        break;
    case 3: mul(a,b);
        break;
    case 4: division(a,b);
        break;
    
    default: cout<<"Invalid choice";
        break;
    }
    return 0;
}