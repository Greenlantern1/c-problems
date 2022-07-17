#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    map<char,int>hash;
    hash['b']=2;
    cout<<hash.size()<<endl;
    return 0;
}