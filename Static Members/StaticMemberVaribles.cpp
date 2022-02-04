#include<bits/stdc++.h>
using namespace std;
class Employee
{
    string name;
    int id;
    public:
    static int nums;
    Employee()
    {
        nums++;
    }
};
int Employee :: nums; 
// Default Value setted to Zero 

int main()
{
    Employee c1,c2,c3;
    cout<<Employee::nums<<endl;
    return 0;
}