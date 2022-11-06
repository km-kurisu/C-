#include<iostream>

using namespace std;

class A
{
public:
    void print();
};

void A::print()
{
    cout<<"print() in A";
}

class B: public A
{
public:
    void print();
};

void B::print()
{
    cout<<"print() in B";
}

class C: public B
{
public:
    void print();
};

void C::print()
{
    cout<<"print() in C";
}

int main()
{
     C b;
    b.print();
}

