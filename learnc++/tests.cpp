#include<iostream>

using namespace std;

class Test
{
    public: int main(int s)
            {
                cout<<s<<endl;
                return 0;
            }
            int main(char *s)
            {
                cout<<s<<endl;
                return 0;
            }
            int main(int s, int m)
            {
                cout<<s<<" "<<m;
                return 0;
            }
};

int main()
{
    Test t;
    t.main(3);
    t.main("I like you");
    t.main(9,6);
    return 0;
}