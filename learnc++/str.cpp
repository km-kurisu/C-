#include<iostream>
#include<string>

using namespace std;

class Student
{
    private:int roll_no;
            string name;
        
    public: Student():roll_no(0), name("")
            {}
            Student(int r, string n):roll_no(r), name(n)
            {}
            void get()
            {
                cout << "Enter roll_no: "<< endl;
                cin >> roll_no;
                cout << "Enter name: " << endl;
                cin >> name;
            }
            void print()
            {
                cout<<"roll_no: "<< roll_no<<endl;
                cout<<"name: "<< name<<endl;
            }
};
int main()
{
    Student *ps = new Student;
    (*ps).get();
    (*ps).print();
    delete ps;
    return 0;
}