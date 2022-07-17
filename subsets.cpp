#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>>getSubSets(int arr[],int n,int index)
{

   vector<vector<int>>sol;
   if(index==n-1)
   {
       sol.push_back({arr[index]});
       return sol;
   }
   vector<vector<int>>x=getSubSets(arr,n,index+1);
    for(auto i:x)
   {
       i.insert(i.begin(),arr[index]);
       sol.push_back(i);
   }
   for(auto i:x)
   {
       sol.push_back(i);
   }
   sol.push_back({arr[index]});
   return sol;
}
int main()
{
    int arr[]={1,3,5};
    int n=3;
    vector<vector<int>>subsets=getSubSets(arr,n,0);
    for(auto i:subsets)
    {
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}