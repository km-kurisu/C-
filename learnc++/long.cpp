#include<iostream>

using namespace std;

int main()
{
    int per;

    cout<<"enter percentage"<<endl;
    cin>>per;

    switch(per/10)
    {
        case10: case 9:
        cout<<"\n you have A+";
        break;

        case8:
        cout<<"\n you have A";
        break;

        case7:
        cout<<"\n you have B+";
        break;

        case6:
        cout<<"\n you have B";
        break;

        case5:
        cout<<"\n you have C";
        break;

        default:
        cout<<"\n you dont have a Grade";
        break;
    }

    return 0;

}