#include<iostream>

using namespace std;

void swap(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;

    cout <<" a "<<a<<"\t";
    cout <<" b "<<b<<endl;
}

void swap(float l, float k)
{
    float t;

    l = t;
    l = k;
    k = l;

    cout <<" a "<<l;
    cout <<"b "<<k<<endl;

}

int main()
{
    swap(10,20);
    swap(1.70,20.4);
    return 0;
}