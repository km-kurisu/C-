#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
    int roll_no;
    string name;

public:
    void getStudent();
    void putStudent();
};

void Student::getStudent()
{
    cout<<"Enter roll no and name of the student: ";
    cin>>roll_no>>name;
}

void Student::putStudent()
{
    cout<<"Roll no of the student: "<<roll_no<<endl;

    cout<<"name of the student: "<<name<<endl;
}

class Marks:public Student
{
private:
    int m1, m2, m3;
    float agg, total, percent;

public:
    void getMarks();
    void calcmarks();
    void putMarks();
};

void Marks::getMarks()
{
    cout<<"Enter the marks of three subjects: "<<endl;
    cin>>m1>>m2>>m3;

    cout<<"Enter the total of all subjects: "<<endl;
    cin>>total;
}

void Marks::calcmarks()
{
    agg = m1 + m2 + m3;

    percent = (agg * 100)/total;
}

void Marks::putMarks()
{
    printf("total percentage of Student is %d" , percent);
    cout<<endl;
}

int main()
{
    Marks M;
    M.getStudent();
    M.getMarks();
    M.putStudent();
    M.calcmarks();
    M.putMarks();

    return 0;
}