#include <iostream>
#include<vector>
using namespace std;
vector<int>Path(int N, int prevStep)
	{
	     if(N==1)
	     { 
	       vector<int>x; 
	       x.push_back(0);
           cout<<"came here"<<prevStep<<endl;
	       return x;
	     }
	     else if(N<1)
	     {
	       vector<int>x; 
	       return x;
	     }
	   vector<int>path;
       
      if(prevStep==0) {
	     vector<int>p1=Path(N-1,1);
	     vector<int>p2=Path(N-2,2);
	     vector<int>p3=Path(N-3,3);
	     for(auto i:p1)
	     {
	         path.push_back(i+1); 
	     }
	     for(auto i:p2)
	     {
	         path.push_back(i+1); 
	     }
	     for(auto i:p3)
	     {
	         path.push_back(i+1); 
	     }
	   }
	  if(prevStep==1)
	   {
	     vector<int>p2=Path(N-2,2);
	     vector<int>p3=Path(N-3,3);
	     for(auto i:p2)
	     {
	         path.push_back(i+1); 
	     }
	     for(auto i:p3)
	     {
	         path.push_back(i+1); 
	     }
	     
	   }
	  if(prevStep==2)
	   {
	     vector<int>p1=Path(N-1,1);
	     vector<int>p3=Path(N-3,3);
	     for(auto i:p1)
	     {
	         path.push_back(i+1); 
	     }
	     for(auto i:p3)
	     {
	         path.push_back(i+1); 
	     }
	   }
	  if(prevStep==3)
	   {
	     vector<int>p1=Path(N-1,1);
	     vector<int>p2=Path(N-2,2);
	     for(auto i:p1)
	     {
	         path.push_back(i+1); 
	     }
	     for(auto i:p2)
	     {
	         path.push_back(i+1); 
	     }
	      
	   }
     
	   
	
	  return path;   
	}

int main() {

	
	int t;
	cin>>t;
	while(t--)
	{
	  int N;
	  cin>>N;
	  vector<int>minPath=Path(N,0);
	  int minpath=minPath[0];
	  for(auto i:minPath)
	  {
	     if(minpath>i)
	     {
	          minpath=i;
	     }
	  }
	 cout<<minpath<<endl;
	}
	return 0;
}
