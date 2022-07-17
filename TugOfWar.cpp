#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int x=0;
vector<int>getSum(vector<vector<int>>team)
{
  vector<int>sum;
  int x=0;
  for(auto i:team)
  {
      for(auto it:i)
      {
       x=x+it;
      }
      sum.push_back(x);
      x=0;
  }
  return sum;
}
vector<vector<int>>getTeam(vector<int>a,vector<int>b,int index,string t)
{
   int n=a.size();
   vector<vector<int>>ans;
   if(index>n-1)
   {
       ans.push_back(vector<int>());
       return ans;
   }
   if(index==(n-1))
   {
     if(t=="T1")
     {
         ans.push_back({a[index]});
         
         return ans;
     }
     else{
         ans.push_back({b[index]});
         return ans;
     }
   }
   
   if(t=="T1")
   {
    for(int i=index;i<n;i++)
    {
       vector<vector<int>>x=getTeam(a,b,i+1,"T2");
       for(auto it:x)
       {
          it.insert(it.begin(),a[i]);
          ans.push_back(it);
       }
      
    }
   }
   else if(t=="T2")
   {
     for(int i=index;i<n;i++)
    {
      vector<vector<int>>x=getTeam(a,b,i+1,"T1");
       for(auto it:x)
       {
           it.insert(it.begin(),b[i]);
           ans.push_back(it);
       }
      
    }
   }
  return ans;
}

int main()
{
    vector<int>a={938,853,185,446,33,97,328,847,232,394};
    vector<int>b={626,725,931,310,235,843,254,303,980,780};
 
    vector<vector<int>>team=getTeam(a,b,0,"T1");
    vector<int>sum=getSum(team);

    cout<<"DONE the teams :"<<team.size()<<endl;
    
    int max=-1;
     for(auto it:sum)
       {
           if(it>max)
           {
               max=it;
           }
       }
    cout<<max<<endl; 
    for(auto it:sum)
       {
           cout<<it<<" "<<endl;;
       }
    //return max;
    //To print the teams   
    /*for(auto i:team)
    {
       for(auto it:i)
       {
           cout<<it<<" ";
       }
       cout<<endl;
    }*/
}
