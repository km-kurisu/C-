#include<iostream>

using namespace std;

class Swap
{
private:
    int a, b, c;

public:
    Swap();
    friend void swapnum(Swap S);
};

Swap::Swap()
{
    cout<<"Enter the two variables to be Swapped: ";
    cin>>a>>b;

    cout<<"Variables before Swapping: "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}

void swapnum(Swap S)
{
    S.c = S.a;
    S.a = S.b;
    S.b = S.c;

    cout << "Variables after Swapping: " << endl;
    cout << S.a << endl;
    cout << S.b;
}


int main()
{
    Swap S;
    swapnum(S);
}