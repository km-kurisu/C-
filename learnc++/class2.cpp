#include<iostream>

using namespace std;



class Books
{
    private:
        char title[30];
        float price;

    public:
        void getdata();
        void putdata();
};

void Books :: getdata()
{
    cout<<"Title: ";
    cin>>title;

    cout<<"Price: ";
    cin>>price;
}

void Books :: putdata()
{
    cout<<"Title: "<<title<<"\n";
    cout<<"Price: "<<price<<"\n";
    
}


int  main()
{

    const int size = 3;
    Books book[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the details of book"<<(i+1)<<"\n";
        book[i].getdata();
    }
    for(int i = 0; i < size ; i++)
    {
        cout<<"\n book"<<(i+1)<<"\n";
        book[i].putdata();
    }

    return 0;
}