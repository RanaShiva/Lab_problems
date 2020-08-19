#include<iostream>
using namespace std;
class NumberDemo
{
    int n1, n2;
    public:
    void inputNumber();
    void show();
    void swap();
};
void NumberDemo::inputNumber()
{
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
}
void NumberDemo::swap()
{
    n1 = n1 -n2;
    n2 = n2 + n1;
    n1 = n2 - n1;
}
void NumberDemo::show()
{
    cout<<n1<<" "<<n2;
}
int main()
{
    NumberDemo n;
    n.inputNumber();
    cout<<"Before swapping"<<endl;
    n.show();
    n.swap();
    cout<<"\nAfter swapping"<<endl;
    n.show();
    return 0;
}