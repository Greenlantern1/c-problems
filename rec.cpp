//NICE THE STACK 
#include<iostream>
using namespace std;
bool divisibleby1(int x)
{

    if(x==1)
    return true;
    else{
        bool c= divisibleby1(x-1);
        cout<< "while coming back"<<x<<endl;
        return c;
    }
    
}
int main()
{
    int x=90;
    bool u=divisibleby1(x);
   
    if(u==false)
    {
    cout<<"GOT YA"<<endl;
    }
    return 0;
}