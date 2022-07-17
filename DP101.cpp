#include<iostream>
#include<map>

using namespace std;
int Fib(int n,map<int,int>& qb)
{
    if(n==0||n==1)
    {
        return n;
    }
    if(qb[n]!=0)
    {
       
        return qb[n];
    }
    int a=Fib(n-1,qb)+Fib(n-2,qb);
    qb[n]=a;
    cout<<"called "<<n<<endl;
    return a;
}

int main()
{
    int n;
    cin>>n;
    map<int,int>qb;
    int ans=Fib(n,qb);
    cout<<n<<"th Fibonacci is "<< ans<<endl;
   
    return 0;
}