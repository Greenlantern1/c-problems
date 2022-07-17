#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<string>getPath(vector<vector<int>>&m,int r,int c)
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
   
   
    if(r==N-1 && c==N-2)
    {
        vector<string> pathR;
        pathR.push_back("R");
        
        return pathR;
    }
    else if(r==N-2 && c==N-1)
    {
        vector<string> pathD;
        pathD.push_back("D");
       
        return pathD;
    }
   
  
    
    vector<string> down=getPath(m,r+1,c);
    
   
    vector<string> right=getPath(m,r,c+1);
   
    
   
    vector<string> ans;

   
    for(int i=0;i<down.size();i++)
    {
       ans.push_back(down[i]+"D");
    }
    for(int i=0;i<right.size();i++)
    {
      ans.push_back(right[i]+"R");
    }
   
    

    
    return ans;
}
int main()
{
    vector<string>ans;
    vector<vector<int>> m={{1, 1, 1, 1},
         {0, 0, 0, 1}, 
         {0, 0, 0, 1},
         {0, 0, 0, 1}};
   
    int n=m.size();
    ans=getPath(m,0,0);
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}