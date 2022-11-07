#include<iostream>

using namespace std;

void sort_a();

void sort_b();

void median();

int i , n , j , m , ele , a[20] , b[20];

int main()
{
    cout<<"Enter the size of arrays: ";
    cin>>n;

    cout<<"\n Enter the elements of first array: ";
    for(i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    cout << "\n Enter the elements of second array: ";
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort_a();
    sort_b();

    cout<<"First array after sorting: "<<endl;
    for(i = 0;i < n ; i++)
    {
        cout<<a[i];
    }

    cout<<"Second array after Sorting: ";
    for(i = 0; i < n ; i++)
    {
        cout<<b[i];
    }


    return 0;
}

void sort_a()
{
    //bubble sort the first array
    for(i = 0; i < n; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(a[j] < a[j + 1])
            {
                a[j] = m;
                m = a[j + 1];
                a[j] = a[j + 1];
            }
        }
    }
}

void sort_b()
{
    // bubble sort the second array
    for (i = 0; i < n; i++)
    {
        for (j = 0 ; j < n; j++)
        {
            if (b[j] < b[j + 1])
            {
                b[j] = m;
                m = b[j + 1];
                b[j] = b[j + 1];
            }
        }
    }
}

/*void median()
{

}*/