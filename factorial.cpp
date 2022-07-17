#include<iostream>
using namespace std;
long long Facto(int n)
{  
   if(n==0)
   {
       return 1;
   }
   return n*Facto(n-1);
}

int main()
{
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    long long fact=Facto(n);
    cout<<"factorial of "<<n<<"="<<fact<<endl;
  return 0;
}