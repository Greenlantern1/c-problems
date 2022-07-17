#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool comparison(vector<int> a,vector<int>b)
    {
        return a[1]<b[1];
    }
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<int> platform;
    	vector<vector<int>> timing;
        //2D vectors were wrong until now
    	for(int i=0;i<n;i++)
    	{
    	    timing.push_back({arr[i],dep[i]});
    	}
    	sort(timing.begin(),timing.end(),comparison);
         platform.push_back(timing[0][1]);
        int i;
        for(int k=1;k<timing.size();k++)
        {
           for(i=0;i<platform.size();i++)
           {
            if(timing[k][0]>platform[i])
            {
                platform[i]=timing[k][1];
                break;
            }
           }
          
           if(i==platform.size())
           {
               platform.push_back(timing[k][1]);
               cout<<"new platform added"<<endl;
           }
           
        }
    	return platform.size();
    }

int main()
{
    int arr[]={900,940,950,1100,1500,1800};
    int dep[]={910,1200,1120,1130,1900,2000};
    int n=6;
    int minPlatforms=findPlatform(arr,dep,n);
    cout<<minPlatforms;
    return 0;
}