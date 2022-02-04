#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int x,y;
    public:
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    void getData()
    {
        cout<<x<<" + i "<<y<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.x=c.x+x;
        temp.y=c.y+y;
        return temp; 
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(2,3);
    c1.getData();
    c3=c1.add(c2);
    c3.getData();
    return 0;
}