#include <iostream>
using namespace std;
#define Max 1000
class Stack
{
    int top; // top index
    int array[Max];
    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if(top==Max)
        {
            cout<<"StackOverflow"<<endl;
        }
        else if (top == -1)
        {
            array[0] = x;
            top = 0;
        }
        else
        {
            top++;
            array[top] = x;
        }
    }
};
int main()
{
    system("pause>0");
}