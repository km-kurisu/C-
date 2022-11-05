#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<char>s;

    for(char c = 'a'; c <= 'f' ; c++)
    {
        s.push(c);
    }

    while(!s.empty())
    {
        cout<<"top element of stack \'"<<s.top()<<"\'"<<endl;
        s.pop();
    }

    cout<<"stack is empty\'"<<endl;

    return 0;
}