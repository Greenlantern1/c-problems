#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*class Solution 
{
    public:
    bool isValid(int grid[N][N],int x,int y,int num)
    {
        //check your ro
        for(int i=0;i<N;i++)
        {
            if(grid[x][i]==num)
            {
                return false;
            }
        }
        //check your column
        for(int j=0;j<N;j++)
        {
            if(grid[j][y]==num)
            {
                return false;
            }
        }
        //Checking your quibits 3X3 
        int qi=3*(x/3);
        int qj=3*(y/3);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[qi+i][qj+j]==num)
                {
                    return false;
                }
            }
        }
        return true;
        
    }
    bool getSudoku(int grid[N][N],int x, int y)
    {
        bool ans=false;
        if(x==N)
        {
            return true ;
        }
        if(y==N)
        {
           x++; 
           y=0;
        }
        if(grid[x][y]!=0)
        {
          ans=getSudoku(grid,x,y+1);  
        }
        else{
        for(int i=1;i<=9;i++)
        {
            if(isValid(grid,x,y,i)==true)
            {
                grid[x][y]=i;
                ans=getSudoku(grid,x,y+1);
                if(ans!=true)
                {
                  grid[x][y]=0;  
                }
            }
        }
        }
    return ans;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        bool a=true;
        getSudoku(grid,0,0);
        return a;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here
       
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<grid[i][j]<<" ";
            }
        }
        
    }
};*/
int main()
{
   vector<vector<string>>ans={{" "}};
   for(auto i:ans)
   {
       i.push_back("stru");
       for(auto it:i)
       {
           cout<<it<<endl;
       }
   }
   
    return 0;
}

// try to do it where driver inserts the matrix;