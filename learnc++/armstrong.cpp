#include<iostream>
#include<cmath>

using namespace std;

void armstrong(int low, int high)
{
    for(int i = low + 1 ; i < high ; ++i)
    {
        int x = i;
        int n = 0;

        while(x!=0){
            x /= 10;
            ++x;
        }

        int sum = 0;
        x = i;
        while(x!=0){
            int digit = x % 10;
            sum += pow(digit,n);
            x /= 10;
        }
         
         if(sum == i)
         {
            cout<<i<<" ";
         }
    }
}


int main()
{
    int n1 = 100;
    int n2 = 400;

    /*cout<<"\n enter the lower limit";
    cout<<"\n enter the higher limit";*/

    armstrong(n1,n2);
    cout<< '\n';

    return 0;
}