#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <string> getThePath(int x,int y,int N)
{   
    if(x==N && y==N)
    {
        vector<string>b={" "};
        return b;
    }
    else if(x<0||y<0||x>N||y>N)
    {
        vector<string>k;
        return k;
    }
    vector<string> ans;
    
        vector<string>buf1=getThePath(x+1,y,N);  //Horizontal moves
        vector<string>buf2=getThePath(x,y+1,N);  
        
        
        for(int index=0;index<buf1.size();index++)
        {
            ans.push_back("h"+buf1[index]);
        }
       
        for(int index=0;index<buf2.size();index++)
        {
            ans.push_back("v"+buf2[index]);
        }
        
    
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