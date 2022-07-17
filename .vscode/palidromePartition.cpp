#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(string s)
    {
       
        if(s.length()==1)
        {
            return true;
        }
        else
        {
            int i=0;
            int j=s.length()-1;
            while(i<j)
            {
               if(s[i]!=s[j]) 
               {
                   return false;
               }
               i++;
               j--;
            } 
            return true;
        }
    }
vector<vector<string>> getPalindromePartition(string s)
    {
        vector<vector<string>>ans;
        if(s.length()==1)
        {
            vector<string>x;
            x.push_back(s+" ");
            ans.push_back(x);
            return ans;
        }
       if(s.length()==0)
       {
           vector<string>x;
           x.push_back(" ");
           ans.push_back(x);
           return ans;
       }
        string subs;
        for(int i=0;i<s.length();i++)
        {
            subs.push_back(s[i]);
            if(isPalindrome(subs)==true)
            {
                string x;
                x=s.substr(i+1);
                vector<vector<string>>y;
                y=getPalindromePartition(x);
                for(int index=(y.size()-1);index>=0;index--)
                {
                    y[index].insert(y[index].begin(),subs+" ");
                }
                for(auto it:y)
                {
                    ans.push_back(it);
                }
            }
        }
        return ans;
    }
int main()
{
    string s="nitin";
    vector<vector<string>>sol=getPalindromePartition(s);
    for(auto i:sol)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
   
}