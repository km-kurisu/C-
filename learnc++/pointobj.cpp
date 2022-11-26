#include<iostream>

using namespace std;

class myclass
{
    int i;
    public: void read(int j)
            {
                i = j;
            }
            int getint()
            {
                return i;
            }
};

int main()
{
    myclass obj, *objectpointer;
    objectpointer = &obj;
    objectpointer->read(10);
    cout<<objectpointer->getint()<<endl;
    return 0;
}