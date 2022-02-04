#include <bits/stdc++.h>
using namespace std;
int fun()
{
    static int x=0;
    // Static Variables lifetime throughout the programme 
    // Value of static Varibale is Zero
    int y=0;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;
    // Containes Garbage value ..

}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}