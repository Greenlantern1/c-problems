#include <iostream>
#include<cmath>
using namespace std;

class Solution
{
public:
    void getMoves(int i, int j, int K, int n, int &invalidMoves,int &validMoves)
    {

        if(K==0 && i>=0 && j>=0 && i<=n-1 &&j<=n-1 )
        {
           validMoves++;
           return;
        }
        else if (i < 0 || j < 0 || i >= n || j >= n)
        {
            invalidMoves++;
        }
        else if(K>0)
        {
            getMoves(i-1,j+2,K-1,n,invalidMoves,validMoves);
            getMoves(i-1,j-2,K-1,n,invalidMoves,validMoves);
            getMoves(i+1,j+2,K-1,n,invalidMoves,validMoves);
            getMoves(i+1,j-2,K-1,n,invalidMoves,validMoves);
            getMoves(i+2,j+1,K-1,n,invalidMoves,validMoves);
            getMoves(i+2,j-1,K-1,n,invalidMoves,validMoves);
            getMoves(i-2,j+1,K-1,n,invalidMoves,validMoves);
            getMoves(i-2,j-1,K-1,n,invalidMoves,validMoves);
        }
    }
    double knightProbability(int n, int k, int row, int column)
    {
        int invalidMoves=0;
        int validMoves=0;
        getMoves(row, column, k, n,invalidMoves,validMoves);
        cout<<invalidMoves<<endl;
        cout<<validMoves<<endl;
double x=double(double(validMoves)/double(pow(8,k)));
        return x;
    }
};
int main()
{
    Solution object;
    double x=object.knightProbability(3,2,0,0);
    cout<<x<<endl;
    
    return 0;
}