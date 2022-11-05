#include<iostream>

using namespace std;

int main()
{
    int n,i;
    float num[100],sum=0.0,avg;

    cout<<"enter the numbers of data: ";
    cin>>n;

    while(n > 100 || n <= 0)
    {
        cout<<"\n error!enter the num between 1 to 100";
        cout<<"\n enter the num again";
        cin>>n;
    }

    for(i = 0; i < n; ++i)
    {
        cout<<i+1<<". enter the number: ";
        cin>>num[i];

        sum += num[i];
    }
    
    avg = sum/n;
    cout<<"\n avg= "<<avg;

    return 0;
    
}