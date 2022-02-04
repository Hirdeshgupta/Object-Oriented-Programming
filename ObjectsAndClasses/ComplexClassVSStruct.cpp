#include<bits/stdc++.h>
using namespace std;
struct Complex
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
};
// One difference between struct and class is that in struct my default all the members are public but in class by default all the members are private
// Class was introduced in c++ so struct was modified in C for compatiblity ...
int main()
{
    Complex c1;
    c1.setData(1,2);
    c1.getData();
    cout<<c1.x<<" "<<c1.y<<endl;
    return 0;
}