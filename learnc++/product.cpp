#include<iostream>
#include<string.h>

using namespace std;

class Product
{
private:
    int Prod_id;
    string Prod_name;
    int Prod_price;

public:
    Product(int id);
    Product(string name , float price);
    Product(int pid , string pname , float pprice);
    void display();
};

Product::Product(int id)
{
    //product 1 dev initialized
    int i = 1;

    cout<<"Enter the Id,Name,Price for product 1:  ";
    cin>>id>>Prod_name>>Prod_price;

    Prod_id = id;
    Prod_name;
    Prod_price;
    
    cout<<"\n";
    /*cout<<"Product 1: "<<endl;
    cout<<Prod_id<<Prod_name<<Prod_price<<endl;*/

}

Product::Product(string name , float price)
{
    //product 2 user acceptance
    int i = 2;

    cout<<"Enter the Id,Name,Price of the Product 2: ";
    cin>>Prod_id>>name>>price;

    Prod_id;
    Prod_name = name;
    Prod_price = price;

    cout<<"\n";

}

Product::Product(int pid , string pname , float pprice)
{
    //product 3 user acceptence
    int i = 3;

    cout<<"Enter the Id,Name,Price of Product 3: ";
    cin>>pid>>pname>>pprice;

    Prod_id = pid;
    Prod_name = pname;
    Prod_price = pprice;

    cout<<"\n";

}

void Product::display()
{
    int i = 0;
    printf("Product %d", i);
    cout<<endl;
    cout<<"Id: "<<Prod_id<<endl;
    cout<<"Name: "<<Prod_name<<endl;
    cout<<"Price: "<<Prod_price<<endl;
}

int main()
{
    Product obj1(110);
    Product obj2("name",130);
    Product obj3(110,"name",150);
    void display();

    obj1.display();
    obj2.display();
    obj3.display();
    

    return 0;
}