#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<vector<string>>getSubsequences(string s)
{
   
   vector<vector<string>>ans;
   if(s.length()==1)
    {
        ans.push_back({s});
        return ans;
    }
   string current=s.substr(0,1);
   string x=s.substr(1);

   vector<vector<string>>buffer=getSubsequences(x);

   ans.push_back({current});

   for(auto x:buffer)
   {
    ans.push_back(x);
   }
   for(auto x:buffer)
   {
    x.insert(x.begin(),current);
    ans.push_back(x);
   }
   
   return ans;
}
int main()
{
    string a="10101";
    vector<vector<string>>subsequences=getSubsequences(a);
    for(auto x:subsequences)
    {
        if(x.size()==2)
        {
            for(auto i:x)
            {
            cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}