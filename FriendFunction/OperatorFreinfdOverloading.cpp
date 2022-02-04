#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int x,y;
    public:
    friend Complex operator+(Complex,Complex);
    Complex()
    {
        x=0;
        y=0;
        // cout<<"Default Constructor is called .."<<endl;
    }
    Complex(int a,int b)
    {
        x=a;
        y=b;
        // cout<<"Default Constrictor is called  .."<<endl;
    }
    void showData(){
        cout<<x<<" "<<y<<endl;
    }
};
Complex operator+(Complex c1,Complex c2)
{
    Complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
int main()
{
    Complex c1(1,2);
    Complex c2(2,4);
    Complex c3=c1+c2;
    c3.showData();
    return 0;
}