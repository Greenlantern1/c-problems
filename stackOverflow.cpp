#include<iostream>
using namespace std;
void fun(int x)
{
    cout<<"lets have some amount of fun"<<endl;
    fun(x-1);
}
int main()
{
    fun(2);
    return 0;
}
