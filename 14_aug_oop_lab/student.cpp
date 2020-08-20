#include<iostream>
using namespace std;
class Student
{
    int admno;
    char sname[20];
    class Student_Marks
    {
        float eng, math, sci, csci, hi, total;
        public: 
        void sMarks()
        {
            cout<<"Enter the marks of english, maths , science, computer science, hindi respectively: "<<endl;
            cin>>eng>>math>>sci>>csci>>hi;
        }
        float cTotal()
        {
            total = eng+ math+ sci + csci + hi;
            return total;
        }
    };
    public:
    Student :: Student_Marks s;
    void readData()
    {
        cout<<"Enter the student name: ";
        cin.get(sname, 20);

        cout<<"Enter the admission number: ";
        cin>>admno;
        s.sMarks();
    }
    void showData()
    {
        cout<<"Total marks of student: "<<s.cTotal();
    }

};
int main()
{
    Student s;
    s.readData();
    s.showData();
    return 0;
}