#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> set;
    set[1]=3;
    set[2]=4;
    map<int,int>::iterator it;
    
    //First way to print the map is to use the iterator 
    for(it=set.begin();it!=set.end();++it)
    {
        cout<<(*it).first<<endl;
    }

    //Easier way is to use auto keyword
    for(auto k:set)
    {
        cout<<k.first<<endl;
    }
    return 0;
}