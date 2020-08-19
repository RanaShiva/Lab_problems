#include<iostream>
#include<string>
using namespace std;
class Employee
{
    string name, pan;
    float tax, taxIncome;
    public:
    void inputInfo();
    void taxCalc();
    void displayInfo();
};
void Employee::inputInfo()
{
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter pan number: ";
    cin>>pan;
    fflush(stdin);
    cout<<"Enter taxable income: ";
    cin>>taxIncome;
}
void Employee::taxCalc()
{
    if(taxIncome < 250000)
    {
        tax = 0;
    }
    else if(taxIncome > 250000 && taxIncome <= 300000)
    {
        tax = 0.1 * (taxIncome - 250000);
    }
    else if(taxIncome > 300000 && taxIncome <= 400000)
    {
        tax = 0.2 * (taxIncome - 300000) + 5000;
    }
    else if(taxIncome > 400000)
    {
        tax = 25000 + 0.3 * (taxIncome - 400000);
    }
    else
    {
        cout<<"Invalid taxable income value";
        exit(0);
    } 
}
void Employee::displayInfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Pan no.: "<<pan<<endl;
    cout<<"Taxable income: "<<taxIncome<<endl;
    cout<<"Tax due: "<<tax<<endl; 
}
int main()
{
    Employee emp;
    emp.inputInfo();
    emp.taxCalc();
    emp.displayInfo();
    return 0;
}