#include <iostream>
#include <stdio.h>
#include <string>
#include<map>
using namespace std;
int main() {
	//code
	
	    string a;
	    cin>>a;
	    int possible=1;
	    map<char,int> link;
	    for(int i=0;i<a.length();i++)
	    {
	        link[a[i]]+=1;
	    }
	    for(int i=0;i<a.length();i++)
	    {
            cout<<a[i]<<"-"<<link[a[i]]<<endl;
            
            int x=2*link[a[i]]-a.length();
            
	        if(x>1)
	        {
	           possible=0;
	          
	        }
	    }
	    cout<<possible<<endl;;
	
	return 0;
}