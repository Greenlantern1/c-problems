#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> WB(int n, vector<string>& dict, string s, int index)
    {
        vector<string>ans;
        if(index>n-1)
        {
            vector<string>v;
            v.push_back("");
            return v;
        }
        string validstring;
        for(int i=index;i<s.length();i++)
        {
            validstring.push_back(s[i]);
            for(auto it:dict)
            {
                if(it==validstring)
                {
                   vector<string>x=WB(n,dict,s,i+1); 
                   for(auto itt:x)
                    {
                        
                     ans.push_back(validstring+" "+itt);
                    }
                }
            }
        }
        return ans;
    }
 

int main()
{   int n=10;
    vector<string>dict={"cat","cats","sand","and","dog"};
    vector<string>sentences;
    string s="catsanddog";
    sentences=WB(n,dict,s,0);
    for(auto i:sentences)
    {
       cout<<i<<endl; 
    }
    cout<<sentences.size()<<endl;
    return 0;
}