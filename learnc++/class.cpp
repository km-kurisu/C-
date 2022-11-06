#include<iostream>

using namespace std;

class Rectangle
{
private:
    int width , height;

public:
    void setvalues(int,int);
    int area()
    {
        return width*height;
    }
};

void Rectangle::setvalues(int x , int y)
{
    width = x;
    height = y;
}

int main()
{
    Rectangle Rect;
    Rect.setvalues(3,4);

    cout<<"Area: "<<Rect.area();

    return 0;
}