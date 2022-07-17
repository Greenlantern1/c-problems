#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct val{
    int first;
    int second;
};
int main()
{
    vector<int>x={1,3,4,5};
    vector<int>::iterator it=upper_bound(x.begin(),x.end(),4.5);
    *it=9;
    //cout<<x[3];
    vector<struct val>p={{1,2},{3,4},{5,6}};
    for(auto x:p)
    {
      cout<<x.first<<"-"<<x.second<<endl;
    }
    vector<struct val>::iterator iti=upper_bound(p.begin(),p.end(),p[0]);
    cout<<(*iti).first<<endl;
    return 0;
}