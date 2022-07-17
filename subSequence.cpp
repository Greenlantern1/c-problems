#include<iostream>
#include<string>
#include<vector>
using namespace std;
//Function to find the subsequence of a string or an integer array;
vector <string> getSubSequence(string s)
{  
    if(s.size()==0)
    {   
        vector<string> v;
        string z;
        v.push_back(z);
        return v;
    } 
        char a=s[0];
        string k=s.substr(1);
        cout<<k<<endl;
        vector<string> ss,buff;
        string h(1,a);
        ss.push_back(h);
        buff=getSubSequence(k);
        //I believe that the function knows how to calculate the substring.
        for(int i=0;i<buff.size();i++)
        {   
            string f=buff[i];
            if(f.size()!=0)
            {
               ss.push_back(f);
            }
            
        }
        for(int i=0;i<buff.size();i++)
        {   
            if(buff[i].size()!=0)
            {
            string x=a+buff[i];
            ss.push_back(x); 
            }
        }
    
   return ss;
}
int main()
{
    string s;
    getline(cin,s);
    vector<string>a;
    a=getSubSequence(s);
    for(auto i:a)
    {
        cout<<i<<endl;
    }
    return 0;
}