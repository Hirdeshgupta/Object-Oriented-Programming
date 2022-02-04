#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int x,y;
    public:
    friend Complex add(Complex,Complex);
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
Complex add(Complex c1,Complex c2)
{
    Complex temp;
    temp.x=c1.x+c2.x;
    temp.y=c1.y+c2.y;
    return temp;
}
int main()
{
    Complex c1(2,3);
    Complex c2(2,4);
    Complex c3=add(c2,c1);
    c3.showData();
    return 0;
}