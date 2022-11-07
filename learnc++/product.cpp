#include<iostream>
#include<string.h>

using namespace std;

class Product
{
private:
    int Prod_id;
    char Prod_name[20];
    int Prod_price;

public:
    Product(int id);
    Product(char name[]);
    Product(float price);
    void display();
};

Product::Product(int id)
{
    /*cout<<"Enter the Product id: ";
    cin>>id;*/
    Prod_id = id;
}

Product::Product(char name[20])
{
    /*cout<<"\n enter the name of the product: ";
    cin>>name;*/
    name = Prod_name;
}

Product::Product(float price)
{
    /*cout<<"Enter the price of Product: ";
    cin>>price;*/
    price = Prod_price;
}

void Product::display()
{
    cout<<Prod_id<<Prod_name<<Prod_price<<endl;
}

int main()
{
    Product obj1(1);
    Product obj2('name');
    Product obj3(500);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}