#include<iostream>
#include<algorithm>
using namespace std;
struct item{
    int value;
    int weight;
};
bool comparison(item a, item b)
{
   double r1=(double)a.value/a.weight;
   //Type casting is the only lesson to be lernt here.
   double r2=(double)b.value/a.weight;
   return r1>r2;
}
int main()
{
    item arr []={{110,40},{100,20},{120,30}};
    sort(arr,arr+3,comparison);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].value<<endl;
    }
    return 0;
}