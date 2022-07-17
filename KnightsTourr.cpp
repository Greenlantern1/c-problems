#include<iostream>
#include<vector>
using namespace std;
#define N 8
vector<vector<int>>visited(N,vector<int>(N,0));
void KnightsTour(int x,int y,vector<vector<int>>&sol,int nonce,int found)
{
   int static num=0; 
   if(x>=0 && x<=N-1 && y>=0 && y<=N-1&& visited[x][y]!=1)
   {
    if(nonce==N*N-1)
    {
        num=nonce;
    }
     cout<<"Calling"<<x<<"-"<<y<<" "<<endl;
     sol[x][y]=nonce;
     visited[x][y]=1;
     int s=0;
     KnightsTour(x-1,y,sol,nonce+1,found);
     KnightsTour(x+1,y,sol,nonce+1,found);
     KnightsTour(x,y-1,sol,nonce+1,found);
     KnightsTour(x,y+1,sol,nonce+1,found);
     if(num!=N*N-1)
     {
        sol[x][y]=0;
        visited[x][y]=0;
     }
     cout<<"Returning"<<x<<"-"<<y<<" "<<endl;
   }
   
}
int main()
{
    //This problem prints the way the knight goes around the chess borad
    vector<vector<int>>sol(N,vector<int>(N,0));
    KnightsTour(1,1,sol,0,0);
    for(auto i:sol)
    {
        for(auto x:i)
        {
          cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}