#include<iostream>

using namespace std;

class Liquid
{
    float specific_gravity;
    public: void input()
            {
                cout << "Specific gravity: ";
                cin >> specific_gravity;
            }
            void output()
            {
                cout<<"Specific gravity: "<<specific_gravity<<endl;
            }
};
class Fuel
{
    float rate;
    public: void input()
            {
                cout << "Rate(per liter): $";
                cin>>rate;
            }
            void output()
            {
                cout<<"Rate(per liter):$"<<rate<<endl;
            }
};
class Petrol: public Liquid,public Fuel
{
    public: void input()
            {
                Liquid::input();
                Fuel::input();
            }
            void output()
            {
                Liquid::output();
                Fuel::output();
            }
};
int main()
{
    Petrol P;
    cout<<"Enter data: "<<endl;
    P.input();
    cout<<endl<<"Displaying data: "<<endl;
    P.output();
    cout<<endl;
    return 0;
}