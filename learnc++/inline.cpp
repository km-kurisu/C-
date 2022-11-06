#include<iostream>

using namespace std;

class Inlinedemo
{
    public: int square(int s);
};

inline int Inlinedemo :: square(int s)
{
    return s * s;
}

int main()
{
    Inlinedemo s;
    cout<<"Square of a No is: "<<s.square(10);
    
    return 0;
}