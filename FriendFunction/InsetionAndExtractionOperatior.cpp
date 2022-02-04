#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int x,y;
    public:
    friend istream& operator>>(istream &,Complex& );
    friend ostream& operator<<(ostream& ,Complex &);
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
        cout<<x<<" + i  "<<y<<endl;
    }
};

istream& operator>>(istream& d,Complex& c)
{
    d>>c.x>>c.y;
    return d;
}
ostream& operator<<(ostream& out,Complex& c)
{
    out<<c.x<<" + i "<<c.y<<endl;
    return out;
}
int main()
{
    Complex c1,c2;
    cin>>c1;
    cout<<c1<<endl;
    cout<<c2<<endl;
    return 0;
}