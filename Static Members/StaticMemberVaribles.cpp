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
int Employee :: nums=0; 
int main()
{
    Employee c1,c2,c3;
    cout<<Employee::nums<<endl;
    return 0;
}