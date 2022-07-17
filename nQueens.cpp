#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=4;
    vector<vector<int>>a(n,vector<int>(n,0));
    vector<vector<int>>b;
    b.push_back({1});
    b.push_back({2});
    for(auto i:b)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}