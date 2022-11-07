#include<iostream>

using namespace std;
//the code is incomplete dont write it down
int main()
{
    int n;
    cout<<"enter the height= ";
    cin>>n;

    for(int i = 0; i < n ; i++)
    {
        for(int j = n + 1; j > i + 2 ; j--)
        {
            cout<<".";
        }

        for (int h = -1; h < i; h++)
        {
            cout<<"#";
        }

        for(int l = n + 1; l < i + 2; l--)
        {
            cout<<"#";
        }

        for(int k = n - 1; k < i + 2 ; k++)
        {
            cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}
