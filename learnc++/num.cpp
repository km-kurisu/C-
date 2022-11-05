#include<iostream>

using namespace std;

int main()
{
    typedef int num;
    num a = 10, b = 15;

    num c = a + b + a - b;
    cout<<c;
    return 0;
}