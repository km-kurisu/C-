#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

class product
{
	public: int prod_id;
		   char prod_name[20];
		   float prod_price;
			void display();

			product()
			{
				/*prod_id = 101;
				strcpy(prod_name , "coffee");
				prod_price = 120;*/
				cout<<"Enter the Product Id,Name,Price for First Product: "<<endl;
				cin>>prod_id>>prod_name>>prod_price;
				
			}

			product(int pids, char pnames[20])
			{
				/*prod_id = pid;
				strcpy(prod_name , pname);
				prod_price = 140;*/
				cout << "\n Enter the Product Id,Name,Price for Second Product: ";
				cin>>pids>>pnames>>prod_price;

				prod_id = pids;
				prod_name = pnames;

			}

			product(int p_idt, char p_namet[20], float p_price)
			{
			 	/*prod_id = pid;
			 	strcpy(prod_name , pname);
			 	prod_price = p_price;*/
				cout << "\n Enter the Product Id,Name,Price for Third Product: ";
				cin>>p_idt>>p_namet>>p_price;

				prod_id  = p_idt;
				prod_name = p_namet;
				prod_price = p_price;

			}
};

void product::display()
{
	printf("prodcut ID : ");

	cout<<prod_id<<endl;

	printf("Product name : ");

	cout<<prod_name<<endl;

	printf("Product Price : ");

	cout<<prod_price<<endl;
}

int main()
{
	int i;

	product o[3] = {product() , product() , product(119 , "Biscuits" , 160)};

	for(i = 0 ; i < 3 ; i++)
	{
		o[i].display();
		cout<<"\n";
	}

	return 0;
}