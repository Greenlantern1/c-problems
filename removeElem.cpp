#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    unsigned long long rI=8104266;
    unsigned long long N=3489601027782;
	    
    vector<unsigned long long>arr;
    unsigned long long i=0;
  
    return 0;
}
/*vector<int>findPath(int N,int r,int c,int k)
{
     
     vector<int>sum;
     int content=(r+1)+N*(c);
     if(r==N-1 && c==N-1)
     {
          sum.push_back(content);
          return sum;
     }
     if(r>N-1||c>N-1)
     {
         return sum; 
     }
     vector<int>pD=findPath(N,r+1,c,k);
     vector<int>pR=findPath(N,r,c+1,k);
     for(auto it:pD)
     {
          sum.push_back(it+content);
     }
      for(auto it:pR)
     {
          sum.push_back(it+content);
     }
     return sum;
}
int main() {
	// your code goes here
	
	     int N,K;
	     cin>>N>>K;
	     vector<int>sum;
	     sum=findPath(N,0,0,K);
	     bool parity=false;
	     for(auto i:sum)
	     {
             cout<<i<<endl;
	          if(i%2==K)
	          {
	              parity=true;
	              break;
	          }
	     }
	     if(parity==true)
	     {
	          cout<<"YES"<<endl;
	     }
	     else
	     cout<<"NO"<<endl;
	
	return 0;
}*/
