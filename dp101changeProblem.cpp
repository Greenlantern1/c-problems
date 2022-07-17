#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 long long int count(int S[], int m, int n)
    {  
        long long int *dp=new long long int[n+1];
         dp[0]=1;
         for(int i=1;i<n+1;i++)
         {
             dp[i]=0;
         }
         dp[0]=1;
         for(int i=0;i<m;i++)
         {
             for(int j=1;j<n+1;j++)
             {
                 if((j-S[i])>=0 && dp[j-S[i]]!=0)
                 {
                     dp[j]+=dp[j-S[i]];
                 }
             }
         }

        return dp[n];
    }

int main()
{
    int S[]={1,2,3};
   long long  int x=count(S,3,4);
    cout<<x<<endl;
    return 0;
}