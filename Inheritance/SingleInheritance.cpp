#include<bits/stdc++.h>
using namespace std;
class Animal
{
    protected:
    string gender;
    int legs;
    public:
    Animal(){}
    Animal(string s,int n)
    {
        gender=s;
        legs=n;
    }
    void getDetails()
    {
        cout<<gender<<" "<<legs<<endl;
    }
};
class Human : public Animal
{
    protected:
    string color;
    public:
    Human(){}
    Human(string s,int n, string c)
    {
        gender=s;
        legs=n;
        color=c;
    }
};
int main()
{
    Human h("Male",2,"fair");
    h.getDetails();
    return 0;
}