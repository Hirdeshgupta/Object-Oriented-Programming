#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int x,y;
    public:
    Complex()
    {
        x=0;
        y=0;
        cout<<"Default Constructor is called .."<<endl;
    }
    Complex(int a,int b)
    {
        x=a;
        y=b;
        cout<<"Default Constrictor is called  .."<<endl;
    }
    Complex(Complex &c)
    {
        x=c.x;
        y=c.y;
        cout<<"Cpy Constructor is Called "<<endl;
    }
};

int main()
{
    Complex c1,c2;
    Complex c3(2,4);
    Complex c4=c3;
    return 0;
}