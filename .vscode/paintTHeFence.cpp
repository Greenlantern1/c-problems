#include<iostream>
#include<vector>
using namespace std;
 long long countWays(int n, int k){
     vector<vector<long>>dp(3,vector<long>(n+1,0));
     dp[2][1]=k;
     dp[0][2]=k;
     dp[1][2]=k*(k-1);
     dp[2][2]=dp[0][2]+dp[1][2];
     for(int i=3;i<n+1;i++)
     {
         dp[0][i]=dp[1][i-1];
         dp[1][i]=dp[2][i-1]*(k-1)%1000000007;
         dp[2][i]=dp[0][i]+dp[1][i];
     }
     for(auto x:dp)
     {
        for(auto i:x)
        {
            cout<<i<<" ";
        }
        cout<<endl;
     }
     return dp[2][n]%1000000007;
    }
int main()
{
    return 0;
}