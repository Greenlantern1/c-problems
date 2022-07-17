#include<iostream>
#include<string>
#include<vector>
using namespace std;

string next_Permutation(string s)
{
   int pivot=-1;
   int n=s.length();
   for(int i=n-1;i>0;i--)
   {
       if(s[i]>s[i-1])
       {
          pivot=i-1;
           break;
       }
   }
   if(pivot==-1)
   {
       string x;
       cout<<"NOT POSSIBLE"<<endl;
       return x;
   }
   else{
      int i=n-1;
      //swap
      for(;i>pivot;i--)
      {
          if(s[i]>s[pivot])
          {
              swap(s[i],s[pivot]);
              break;
          }
      }

      //Reverse
      i=pivot+1;
      int j=n-1;
      while(i<j)
      {
          swap(s[i],s[j]);
          i++;
          j--;
      }
   }
   return s;
}
int main()
{
    string a;
    for(int i=1;i<10;i++)
    {
        a.push_back(char(i+48));
    }
    for(int i=0;i<10;i++)
    {
    a=next_Permutation(a);
    cout<<a<<endl;
    }
    
    return 0;
}