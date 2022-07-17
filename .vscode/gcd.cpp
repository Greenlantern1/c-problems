#include <iostream>
using namespace std;
int gcd(int a,int b)
{
     if(b==0)
     {
          return a;
     }
     else if(a>b)
     {
          return gcd(b,a%b);
     }
     else return gcd(a,b%a);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int A,B;
	     cin>>A>>B;
	     int count=0;
	     int x=1;
	     while(gcd(A+x,B+x)==x)
	     {
	        count++;
            x++;  
	     }
	     cout<<count<<endl;
	}
	return 0;
}
