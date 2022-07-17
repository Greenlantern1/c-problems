#include<iostream>
#include<string>
using namespace std;

int main()
{
   int a[]={1,2,3,4,6};
   int n=5;
   int *x=lower_bound(a,a+n,3);
   int *y=a+1;
   cout<<a<<" "<<y<<endl;
    return 0;
}