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
    }
    Complex(int a,int b)
    {
        x=a;
        y=b;
    }
    void showData()
    {
        cout<<x<<" + i "<<y<<endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x=c.x+x;
        temp.y=c.y+y;
        return temp;
    }
};

int main()
{
    Complex c1(2,4);
    Complex c2(3,4);
    Complex c3;
    c3=c1+c2;
    c3.showData();
    
    return 0;
}