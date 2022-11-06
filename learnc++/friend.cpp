#include<iostream>

using namespace std;

class Box
{
    private:
        double width;

    public: friend void print_width(Box box);

            void set_width(double wid);
};

void Box :: set_width(double wid)
{
    width = wid;
}

void print_width(Box box)
{
    box.width = box.width * 2;

    cout<<"Width of Box: "<<box.width<<endl;
}

int main()
{
    Box box;
    
    box.set_width(10.0);
    print_width(box);
    
    return 0;
}