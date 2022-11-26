#include<iostream>

using namespace std;

class base
{
    public:
        int n1;
        void show()
        {
            cout << "\n n1 = " << n1 << endl;
        }
};

class derived:public base
{
    public: int n2;
            void show()
            {
                cout << "\n n1 = " << n1 << endl;
                cout << "\n n2 = "<< n2 << endl;
            }
};
int main()
{
    base b;
    base *bptr;
    cout<<"Pointer of base class:";
    bptr = &b;
    bptr->n1 =44;
    bptr->show();
    derived d;
    cout<<"\n";
    bptr = &d;
    bptr->n1 = 66;
    bptr->show();
    return 0;
}