#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 bool comparison(vector<int> a,vector<int>b)
   {
       return a[0]<b[0];
   }
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) 
{ 
    sort(intervals.begin(),intervals.end(),comparison);
   
    vector<vector<int>>stack;
    stack.push_back(intervals[0]);
    int stackIndex=0;
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]>stack[stackIndex][1])
        {
           stack.push_back(intervals[i]);
           stackIndex++;
        }
        else{
            if(intervals[i][1]>stack[stackIndex][1])
            {
                stack[stackIndex][1]=intervals[i][1];
            }
          
        }
    }
    return stack;
}
int main()
{
    vector<vector<int>>intervals;
    intervals={{1,2},{2,3},{6,9},{0,10}};
    intervals=overlappedInterval(intervals);
    for(auto i:intervals)
    {
        for(auto k:i)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}