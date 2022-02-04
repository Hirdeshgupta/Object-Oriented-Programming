#include<bits/stdc++.h>
using namespace std;
class Employee
{
    string name;
    int id;
    static int nums;
    public:
    Employee()
    {
        nums++;
    }
    static void  getNum()
    {
        cout<<nums<<endl;
    }
};
int Employee :: nums; 
// Default Value setted to Zero 

int main()
{
    Employee c1,c2,c3;
    Employee::getNum();
    return 0;
}