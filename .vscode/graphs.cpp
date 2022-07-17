#include<iostream>
#include<vector>

using namespace std;
class edge 
{
   public:
   int source,destination;
   int weight;
   edge(int s,int d, int w)
   {
      source=s;
      destination=d;
      weight=w;
   }
   void print()
   {
    cout<<source<<"->"<<destination<<endl;
   }
};
int main()
{
    
    vector<vector<edge>>graph(10);
    
    graph[0].push_back(edge(0,1,4));
    graph[0].push_back(edge(0,2,4));
    graph[0].push_back(edge(0,3,4));
    graph[0].push_back(edge(0,4,4));
    graph[0].push_back(edge(0,5,4));
    for(auto x:graph)
    {
        for(auto y:x)
        {
           y.print();
        }
    }
    return 0;
}