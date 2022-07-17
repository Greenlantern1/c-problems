#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string>getPath(vector<vector<int>>&m,int r,int c,vector<vector<int>>&visited)
{
   
    int N=m.size();
    if(r>(N-1) || c>(N-1) || r<0 || c<0)
    {
       vector<string>e;
       return e;
    }
    
    if(m[r][c]==0)
    {
       vector<string>e;
       return e;
    }
    if(visited[r][c]==1)
    {
       vector<string>e;
       return e;
    }
    visited[r][c]=1;
    if(r==(N-1)&& c==(N-1))
    {
        vector<string>x;
        x.push_back("");
        visited[r][c]=0;
        return x;
    }
   
    vector<string> up=getPath(m,r-1,c,visited);
    vector<string> down=getPath(m,r+1,c,visited);
    vector<string> right=getPath(m,r,c+1,visited);
    vector<string> left=getPath(m,r,c-1,visited);
    vector<string> ans;
    for(int i=0;i<up.size();i++)
    {
        ans.push_back("U"+up[i]);
    }
    for(int i=0;i<down.size();i++)
    {
       ans.push_back("D"+down[i]);
    }
    for(int i=0;i<right.size();i++)
    {
      ans.push_back("R"+right[i]);
    }
    for(int i=0;i<left.size();i++)
    {
        ans.push_back("L"+left[i]);
    }
    

    visited[r][c]=0;
    return ans;
}
int main()
{
    vector<string>ans;
   
    vector<vector<int>> m={{1, 1, 1, 1, 1},
         {1, 1, 1, 1, 1}, 
         {1, 1, 1, 1, 1},
         {1, 1, 1, 1, 1},
         {1, 1, 1, 1, 1}};
    int n=m.size();
    vector<vector<int>>visited(n,vector<int>(n,0));
    ans=getPath(m,0,0,visited);
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    return 0;
}