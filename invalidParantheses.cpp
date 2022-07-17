#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
 int isValid(string a)
    {
       
      int count=0;
      for(int i=0;i<a.length();i++)
      {
        if(a[i]=='(')
          count+=1;
        if(a[i]==')')
        {
           count-=1;
        }
        if(count==-1)
        {
            
            return -1;
        } 
      }
      if(count==0)
      {
        return 1;
      }
      return -1;
    }

vector<string>getSol(string s,int min,map<string,int>&hash)
{
    vector<string>ans;
    if(min==0)
    {
      if(isValid(s)==1)
      {
         if(hash[s]==0)
         {
             ans.push_back(s);
             hash[s]=1;
             return ans;
         }
      }
    }
   
    for(int i=0;i<s.length();i++)
    {
       vector<string>temp;
       if(s[i]==')'||s[i]=='(')
       {
           string ls=s.substr(0,i);
           string Rs=s.substr(i+1); 
           string next=ls+Rs;
           temp=getSol(next,min-1,hash);
       } 
       for(auto it:temp)
       {
           ans.push_back(it);
       }
    }
    return ans;
}
int getMin(string a)
{
  int min=0;
    int count=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='(')
        {
            count+=1;
        }
       if(a[i]==')')
        {
            count-=1;
        }
        if(count==-1)
        {
            min++;
            count++;
        }
    }
    min=min+count;
    return min;
}
int main()
{
    string a="()())()";
    int min=getMin(a);
    map<string,int>m;
    vector<string>possibleSolutions=getSol(a,min,m);
    for(auto x:possibleSolutions)
    {
        cout<<x<<endl;
    }
    return 0;
}