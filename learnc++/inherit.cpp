#include<iostream>

using namespace std;

class Base
{

public:
    Base();
    ~Base();
    protected:
    private:
};

Base::Base() {}

Base::~Base() {}

class Derived:public Base
{

public:
    Derived();
    ~Derived();
    private:
    protected:
};

Derived::Derived() {}

Derived::~Derived() {}

int main()
{
    cout<<"the program executed";

    return 0;
}
