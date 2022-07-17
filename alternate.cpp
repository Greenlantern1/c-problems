#include<iostream>
#include<vector>
using namespace std;
	void rearrange(int arr[], int n) {
	    // code here
	    // we need to get an alternate design
	    vector<int>positive;
	    vector<int>negative;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            negative.push_back(arr[i]);
	        }
	       else
	       {
	           positive.push_back(arr[i]);
	       }
	    }
	    int j=0;
	    for(int i=0;i<n-1;i++)
	    {
	        arr[i]=positive[j];
	        arr[i+1]=negative[j];
	        j++;
	    }
	    
	}
int main()
{
    int arr[]={9, 4, -2, -1, 5 ,0 ,-5, -3, 2};
    rearrange(arr,9);
    int n=9;
   vector<int>a;
   a.push_back(-1);
   cout<<a[0]<<endl;
    return 0;

}