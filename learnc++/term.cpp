#include<iostream>

using namespace std;

int main()
{
    int a,d,n,sum,term = 0;

    cout<<"enter the first term, common diff,"<<"and the number of terms to be summed "<<"respectively:\n";
    cin>>a>>d>>n;
    sum = 0;

    int i = 0;
    cout<<"\n the terms are ";
    do
    {
        term = a + (i - 1) * d;
        sum += term;
        cout<<term<<" ";
        ++i;
    }
    while(i<=n);
    cout<<"\n the sum of AP is "<<sum;
    return 0;
}
