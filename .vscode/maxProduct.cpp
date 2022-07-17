#include<iostream>
#include<vector>
using namespace std;
int maxProduct(vector<int>&arr)
{
   int maxP=-2222;
   int minP=22222;
   int cMax=1;
   int cMin=1;
   int countz=0;
   int a,b;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]!=0)
       { 
          cMax=cMax*arr[i];
          cMin=cMin*arr[i]; 
         
          if(cMax<cMin)
          {   int t=cMax;
              cMax=cMin;
              cMin=t;
            
          }
           if(cMin>arr[i])
             {
                 cMin=arr[i];
               }
          if(cMax<arr[i])
          {
              cMax=arr[i];
          }
          if(cMax>maxP)
          {
            maxP=cMax;
          }
          if(cMin<minP)
          {
              minP=cMin;
          }
       }
       else
       {
           cMin=1;
           cMax=1;
           countz++;
       }
   }
   if(maxP<0 && countz>0)
   {
     return 0;
   }
   return maxP;
}
        
int main()
{
  vector<int>arr;
  arr={1,0,-1,2,3,-5,-2};
  int maxSubArrayProduct=maxProduct(arr);
  cout<<"The maximum product of a subarray is "<< maxSubArrayProduct<<endl;
}