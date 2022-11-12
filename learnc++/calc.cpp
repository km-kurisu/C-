#include<iostream>

using namespace std;

class Number
{
    private: int add , sub , mul , a, b;
             float div;

    public:  void in()
             {
                cout<<"Enter two numbers: ";
                cin>>a>>b;
             }

             Number()
            {
                add = a + b;
                sub = a - b;
                mul = a * b;
                div = a / b;
            }

            void display()
            {
                cout<<"\n Addition: "<<add<<endl;
                cout<<"Subtraction: "<<sub<<endl;
                cout<<"Multiplication: "<<mul<<endl;
                cout<<"Division: "<<div<<endl;
            }
};

int main()
{
    Number N;
    N.in();
    N.display();

    return 0;
}