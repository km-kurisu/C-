#include<iostream>

using namespace std;

class Student
{
    private:
        char name[20];
        int marks;

    public: void getname()
            {
                cin>>name;
            }

            void getmarks()
            {
                cin>>marks;
            }

            void displayinfo()
            {
                cout<<"name: "<<name<<endl;
                cout<<"marks: "<<marks<<endl;
            }
};

int main()
{
    Student st[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"student "<<i + 1<<endl;
        cout<<"enter the name "<<endl;
        st[i].getname();
        cout<<"enter the marks "<<endl;
        st[i].getmarks();
    }

    for(int i = 0; i < 5 ; i++)
    {
        cout<<"student"<<i+1<<endl;
        st[i].displayinfo();
    }

    return 0;
}