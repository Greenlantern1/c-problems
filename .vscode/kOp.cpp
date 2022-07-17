#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int MaxKop(vector<int>a,int k)
{
    
    int maxSum=0;
    int min=INT16_MAX;
    sort(a.begin(),a.end());
    for(auto i:a)
    {
        if(i<0)
        {
           if(k>0)
           {
            i=i*-1;
            k--;
           }
        }
        maxSum=maxSum+i;
        if(i<min)
        {
            min=i;
        }
    }
    cout<<min<<endl;
    if(k%2==0)
    {
      return maxSum;
    }
    else{
        return (maxSum-min);
    }
    
}

int main()
{
    vector<int>a;
    a={5, -2, 5, -4, 5, -12, 5, 5, 5, 20};
    int k=5;
    int maxSum=MaxKop(a,k);
    cout<<maxSum<<endl;
    return 0;
}