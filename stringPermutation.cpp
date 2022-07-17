#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void getPermutation(string ps,string anf)
{
    
    if(ps.length()==0)
    {
      cout<<anf<<endl;
      return;
    }
   for(int i=0;i<ps.size();i++)
  {
      char c=ps[i];
      string stringLeft=ps.substr(0,i);
      string stringRight=ps.substr(i+1);
      string q=stringLeft+stringRight;
      getPermutation(q,anf+c);
  }
}

void findPermuataion (string S)
{
   vector<string>v;
   getPermutation(S,"");
   return;
}
int main()
{
   cout<<"Enter the string you wish to see the permutations(lexicographical) for"<<endl;
   string S;
   getline(cin,S);
   findPermuataion(S);
   /*for(auto i=0;i<V.size();i++)
   {
       cout<<V[i]<<endl;
   }*/
   return 0;
}

