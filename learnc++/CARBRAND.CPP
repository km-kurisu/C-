#include<iostream.h>
#include<conio.h>
class car
{
  protected: char car_type[20];
  public:   void getcar()
			{
			 cout<<"Enter car Type :";
			 cin>>car_type;
			}
			void dispcar()
			{
			cout<<"Car Type : "<<car_type<<endl;
			}
};
class brand :public car
{
   protected: char brand_name[20];
			  float speed;
   public :   void getbrand()
			  {
			   cout<<"Enter brand Name : ";
			   cin>>brand_name;
			   cout<<"Enter Car Speed : ";
			   cin>>speed;
			  }
			  void dispbrand()
			  {
			  cout<<"Brand Name : "<<brand_name<<endl;
			  cout<<"Car Speed :"<<speed<<"mph"<<endl;
			  }
};
class model : public brand
{
  private: char model_name[20];
		   long int price;
  public: void getmodel()
		  {
		   cout<<"Model Name of car : ";
		   cin>>model_name;
		   cout<<"Price Of car model : ";
		   cin>>price;
		  }
		  void dispmodel()
		  {
		   cout<<"Model Name : "<<model_name<<endl;
		   cout<<"Model price : "<<price<<endl;
		  }
};
void main()
{
 model m;
 clrscr();
		  m.getcar();
		  m.getbrand();
		  m.getmodel();
		  m.dispcar();
		  m.dispbrand();
		  m.dispmodel();
 getch();
}
