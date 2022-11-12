#include<iostream.h>
#include<conio.h>
class person
{
  protected: char name[20];
			 char gender[10];
			 int age;
  public:   void getperson()
			{
			 cout<<"Enter Name :";
			 cin>>name;
			 cout<<"Enter Gender : ";
			 cin>>gender;
			 cout<<"Enter Age : ";
			 cin>>age;
			}
			void dispperson()
			{
			cout<<"Name : "<<name<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Age : "<<age<<endl;
			}
};
class employee :public person
{
   protected: int emp_id;
			  char company[20];
			  float salary;
   public :   void getemployee()
			  {
			   cout<<"Enter Employee id : ";
			   cin>>emp_id;
			   cout<<"Enter Company Name : ";
			   cin>>company;
			   cout<<"Enter Salary : ";
			   cin>>salary;
			  }
			  void dispemployee()
			  {
			  cout<<"Employee ID : "<<emp_id<<endl;
			  cout<<"Company name :"<<company<<endl;
			  cout<<"Salary : "<<salary<<endl;
			  }
};
class programmer : public employee
{
  private:  int no_of_prog_lang_known;
  public: void getprogrammer()
		  {
		   cout<<"No of Programing Language know : ";
		   cin>>no_of_prog_lang_known;
		  }
		  void dispprogrammer()
		  {
		   cout<<"No of Programing Language know : "<<no_of_prog_lang_known;
		  }
};
void main()
{
 programmer p;
 clrscr();
		  p.getperson();
		  p.getemployee();
		  p.getprogrammer();
		  cout<<"------------------------------------------"<<endl;
		  p.dispperson();
		  p.dispemployee();
		  p.dispprogrammer();
 getch();
}
