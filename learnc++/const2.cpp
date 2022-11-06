#include<iostream>

using namespace std;

class construct
{
private:
    float area;

public:
    construct();
    construct(int a, int b);
    void display();
};

construct::construct()
{
    area = 0;
}

construct::construct(int a,int b)
{
    area = a*b;
}
void construct:: display()
{
    cout<<area<<endl;
}

int main()
{
    construct o;
    construct o2(10,20);
    o.display();
    o2.display();

    return 0;
}