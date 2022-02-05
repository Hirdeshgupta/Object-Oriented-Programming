#include<bits/stdc++.h>
using namespace std;
class Car
{
    protected:
    int price;
    string color;
    int capacity;
    public:
    Car(){}
    Car(int a,string s,int b)
    {
        price=a;
        color=s;
        capacity=b;
    }
};
class SportCar : public  Car
{
    string alarm;
    public:
    SportCar(int a, string s,int b,string s2)
    {
        price=a;
        color=s;
        capacity=b;
        alarm=s2;
    }
};
int main()
{
    SportCar s1(1000,"red",10,"yoyo");
    return 0;
}