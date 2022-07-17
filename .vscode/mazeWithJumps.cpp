#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <string> getThePath(int x,int y,int N)
{   
    
    return ans;
}
int main()
{
   int Maze[3][3];
   string Moves="hv";
   int N;
   cin>>N;
   vector<string>moves=getThePath(0,0,N);
   for(int k=0;k<moves.size();k++)
   {
       cout<<k<<moves[k]<<endl;
   }
   return 0; 
}