#include<iostream>
#include<vector>
using namespace std;
int minCost(vector<int>S1,vector<int>S2,vector<int>t1,vector<int>t2,int x1,int x2,int e1,int e2)
{
   
}

int main()
{
    vector<int>S1={1,2,4,5,6,9};
    vector<int>S2={2,3,5,6,7,1};
    vector<int>t1={2,3,4,12,2};
    vector<int>t2={2,13,4,17,2};
    int e1=10;
    int e2=11;
    int x1=10;
    int x2=12;
    //we need to find the minimum cost of the car chasis assembly.
    int minc=minCost(S1,S2,t1,t2,x1,x2,e1,e2);
    return 0;
}