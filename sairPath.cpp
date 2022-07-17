#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> getPath(vector<int>Jumps,int N)
{
    if(N==0)
    {
        vector<string> a={""};
        return a;
    }
    else if(N<0)
    {
        vector<string>n;
        return n;
    }
   vector<string> ans;
   for(int i=0;i<Jumps.size();i++)
   {
      vector <string> bf=getPath(Jumps,N-i-1);
      for(int k=0;k<bf.size();k++)
      { 
          ans.push_back(to_string(i+1)+bf[k]);
      }
   }
   return ans;
}
int main()
{   
    /*N is the number of steps in the  stair and Jumps contain the valid jumps */
    int N;
    cin>>N;
    vector<int>Jumps={1,2,3,4};
    vector<string> path=getPath(Jumps,N);
    for(auto i:path)
    {
        cout<<i<<endl;
    }
    return 0;
}