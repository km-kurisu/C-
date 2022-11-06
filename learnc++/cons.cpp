#include<iostream>

using namespace std;

class abc
{
public:
    abc();
    ~abc();
};

abc::abc()
{
    cout<<"welcome";
}

abc::~abc()
{
    cout<<"\n india";
}

int main()
{
    abc obj;

    return 0;
}