#include<iostream>

using namespace std;

int val = 0;

class Test
{

public:
    Test();
    ~Test();
};

Test::Test()
{
    cout<< ++val;
}

Test::~Test()
{
    cout<< val--;
}

int main()
{
    Test obj1,obj2,obj3;
    {
        Test obj4;
    }

    return 0;
    
}
