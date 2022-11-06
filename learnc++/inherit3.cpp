#include<iostream>

using namespace std;

class Test
{
private:
    int value;
public:
    Test(int v = 0);

    int getvalue()
    {
        return value;
    }
};

Test::Test(int v = 0)
{
    value = v;
}


int main()
{
     Test t;

    cout<< t.getvalue();

    return 0;
}