#include<iostream>
#include<vector>
#include<map>
using namespace std;
int shortSubarray(vector<int> nums,int target)
{ 
        int sum=0;
        int minLength=3333333;
        int length;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
           m[i]=sum;
           cout<<i<<"-"<<m[i]<<endl;
        }
        sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum=sum+nums[i];
           if(sum>=target)
           {
             length=i+1;
             if(length<minLength)
             {
               minLength=length;
              }
             for(int j=i;j>=0;j--)
             {
               if(m[j]<=sum-target)
               {
                    
                    length=i-j;
                    if(length<minLength)
                     { 
                         minLength=length;
                     } 
                    break;
               }
              
             }
           }
          
            
         
        }
      if( minLength>nums.size())
          return 0;
        return minLength;
    }

int main()
{
    vector<int> a={2,3,1,2,4,3};
    int target=7;
    int length=shortSubarray(a,target);
    cout<<length<<endl;
    return 0;
}