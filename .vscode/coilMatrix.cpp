#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
     vector<vector<int>> matrix(4*n,vector<int>(4*n,0));
      int r=4*n;
      int c=r;
      int x=1;
      for(int i=0;i<r;i++)
      {
          for(int j=0;j<c;j++)
          {
             matrix[i][j]=x;
             cout<<matrix[i][j]<<" ";
             x++;
          }
          cout<<endl;
      }

    return 0;
}