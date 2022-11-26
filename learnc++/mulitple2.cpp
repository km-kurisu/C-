#include<iostream>

using namespace std;

class A
{
    public: int A;
};
class B : virtual public A
{
    public: int B;
};
class C : virtual public A
{
    public: int C;
};
class D : public B, public C
{
    public: int D;
};
int main()
{
    D d;
    d.A = 10;
    //d.A = 100;
    d.B = 20;
    d.C = 30;
    d.D = 40;
    cout<<"A = "<<d.A<<endl;
    cout<<"B = "<< d.B << endl;
    cout<<"C = " << d.C << endl;
    cout<<"D = " << d.D << endl;
    return 0;  
}