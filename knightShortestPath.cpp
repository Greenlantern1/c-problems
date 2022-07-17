#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
struct cell{
    int x;
    int y;
    int level;
    cell(int i,int j)
    {
        x=i;
        y=j;
        level=0;
    }
};
int bfs(cell src,cell tgt,unordered_map<pair<int,int>,int>&visited,int N)
{
   queue<cell>x;
   x.push(src);
   visited[{src.x,src.y}]=1;
   while (!x.empty())
   {
    cell curr=x.front();
    if(curr.x==tgt.x && curr.y==tgt.y)
    {
       return curr.level;
    }
    //inserting the valid kids into the queue;
    //1.check if valid && check if visited
    if(curr.x>=0 && curr.y>=0 && curr.x<=N-1 && curr.y<=N-1)
    {
        cell temp=cell(curr.x,curr.y);
        for(int i=-2;i<=2;i++)
        {
            int j=(i==1||i==-1)?2:1;
            cell a1= cell(temp.x+i,temp.y+j);
            if(visited[{a1.x,a1.y}]!=1)
            {
                a1.level=curr.level+1;
                x.push(a1);
            }
            cell a2= cell(temp.x+i,temp.y-j);
            if(visited[{a2.x,a2.y}]!=1)
            {
                a1.level=curr.level+1;
                x.push(a2);
            } 
   
        }
    }

   }
   return -1;
}
int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
    unordered_map<pair<int,int>,int>visited;
    cell src=cell(KnightPos[0],KnightPos[1]);
    cell tgt=cell(TargetPos[0],TargetPos[1]);
    bfs(src,tgt,visited,N);
}

int main()
{
    vector<int>k={0,0};
    vector<int>t={4,5};
    int x=minStepToReachTarget(k,t,8);
    return 0;
}