#include<iostream>
#include<algorithm>
using namespace std;

struct Job{
    int id;
    int deadline;
    int profit;
};
bool comparison(Job a, Job b)
{
    return (a.profit>b.profit);
}

int main()
{
    struct Job a[]={{1,2,20},{2,5,200},{23,90,4000}};

    // sort(a,a+3,comparison);
    
    sort(a,a+3,[](Job a,Job b){return a.profit>b.profit;});
    for(int i=0;i<3;i++)
    {
       cout<<a[i].profit<<endl;
    }
    return 0;
}