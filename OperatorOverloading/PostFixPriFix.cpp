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
    Complex operator++()
    {
        Complex temp;
        temp.x=++x;
        temp.y=++y;
        return temp;
    }
    Complex operator++(int)
    {
        Complex temp;
        temp.x=x++;
        temp.y=y++;
        return temp;
    }
};

int main()
{
    Complex c1,c2;
    Complex c3(2,4);
    Complex c4=++c3;
    Complex c5=c3++;
    c3.showData();
    c4.showData();
    c5.showData();
    return 0;
}