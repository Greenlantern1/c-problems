#include<iostream>
#include<string>
#include<map>
using  namespace std;
 string chooseandswap(string ans){
       // First find the discontinuity
       string a=ans;
       int dis=0;
       map<char,int> A;
       for(int i=0;i<a.length()-1;i++)
       {
           A[a[i]]=1;
           if (a[i]>a[i+1])
           {
               dis=i+1;
               break;
           }
       }
       if(dis==0)
       {
           return ans;
       }
       char lMin='z';
       
       for(int j=dis;j<a.length();j++)
       {
          if(a[j]<lMin && A[a[j]]!=1)
          {
              lMin=a[j];
          }
       }
       
       char second;
       for(int i=0;i<a.length();i++)
       {
           if(lMin<a[i])
           {
               second=a[i];
               break;
           }
       }

       for(int i=0;i<a.length();i++)
       {
           if(a[i]==lMin)
           {
               a[i]=second;
               
           }
           else if(a[i]==second)
           {
               a[i]=lMin;
           }
       }
       if(a<ans)
       {
           return a;
       }
       else{
           return ans;
       } 
       
    }
int main()
{
    string s="divya";
    s=chooseandswap(s);
    cout<<s<<endl;
    return 0;
}