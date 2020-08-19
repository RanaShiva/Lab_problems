#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    unsigned int roll, sub1, sub2, sub3;
    float percent;
    char grade;
    public:
    void inputInfo();
    void calcPercentage();
    void displayInfo();
};
void Student::inputInfo()
{
    cout<<"Enter name: ";
    getline(cin, name);
    fflush(stdin);
    cout<<"Enter the marks of three subjects: ";
    cin>>sub1>>sub2>>sub3;
    cout<<endl;
}
void Student::calcPercentage()
{
    percent = (sub1 + sub2 + sub3)/3.0;
    if(percent >= 90)
    {
        grade = 'A';
    }
    else if(percent >= 80)
    {
        grade = 'B';
    }
    else if(percent >= 60)
    {
        grade = 'C';
    }
    else if(percent >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}
void Student::displayInfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no.: "<<roll<<endl;
    cout<<"Marks in three subject: "<<sub1<<" "<<sub2<<" "<<sub3<<endl;
    cout<<"Percentage: "<<percent<<endl;
    cout<<"Grade: "<<grade<<endl;
}
int main()
{
    Student s;
    s.inputInfo();
    s.calcPercentage();
    s.displayInfo();
    return 0;
}
