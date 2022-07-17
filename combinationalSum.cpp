#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> getSum(vector<int> &A, int B,int sum,int index)
    {
       vector<vector<int>>ans;
       if(sum>B)
       {
           return ans;
       }
       if(sum==B)
       {
           ans.push_back(vector<int>());
           return ans;
       }
       for(int i=index;i<A.size();i++)
       {
           if(A[i]==A[i+1])
           {
              continue;
           }
           sum=sum+A[i];
           vector<vector<int>>x=getSum(A,B,sum,i);
           sum=sum-A[i];
           for(auto it:x)
           {
               it.insert(it.begin(),A[i]);
               ans.push_back(it);
           }
       }
       return ans;
    }
   

int main()
{
    vector<int>A={1,2,3};
    int B=4;
    sort(A.begin(),A.end());
    vector<vector<int>>ans=getSum(A,B,0,0);
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}