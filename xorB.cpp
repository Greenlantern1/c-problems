#include <iostream>
#include<string>
using namespace std;

int main() 
{
	   int N;
	   cin>>N;
	   string a;
	   cin>>a;
	   int i=0;
       int j=N-1;
       int count=0;
       while(i<j)
        {
             if(a[i]!=a[j])
             {
                 cout<<(a[i]^a[i+1]);
                 cout<<(a[j]^a[j-1]);
               if((a[i]^a[i+1])==0 && (a[j]^a[j-1])==0)
               {
                    i++;
                    j--;
                    cout<<"came here"<<endl;
               }
               count++;
             }
             
           i++;
           j--;
        }
       cout<<count<<endl;
	return 0;
}
