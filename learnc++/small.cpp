#include<iostream>

using namespace std;

int main()
{
    int i , n , elements, a[20];

    cout<<"enter the size of array: "<<endl;
    cin>>n;

    cout<<"enter the elements of the array: ";
    for(i = 0; i < n ; i++)
    {
        cin>>a[i];
    }

    cout<<"assuming the array is already sorted"<<endl;
    
    for(i = 0; i < n ; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"the smallest element of the array is: "<<a[0]<<endl;

    cout<<"the second smallest element of the array is: "<<a[1]<<endl;

    return 0;
}