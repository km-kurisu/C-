#include<iostream>
 
 using namespace std;
 int x;

 void switchcse();

 int main()
 {
    cout<<"\n enter a case number between 1,2,3"<<endl;
    cin>>x;

    switchcse();

    return 1;
 }

 void switchcse()
 {    
    switch(x){
        case 1:
        cout<<"\n This is case 1 lol";
        break;

        case 2:
        break;

        case 3: 
        cout<<"\n x is 3, so jumping to thrid branch";
        break;

        default:
        cout<<"\n x is not within the range, so no need to say thankyou!";
    };
 }