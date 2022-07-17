#include<iostream>
#include<map>
using namespace std;
 int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int countTheif=0;
        map<int,int>CaughtTheif;
        for(int i=0;i<n;i++)
        {
            int found=0;
            if(arr[i]=='P')
            {
                for(int t=i-k;t<=(i+k) ;t++)
                {
                    if(t>=n)
                    {
                        break;
                    }
                    if(t<0)
                    {
                        t=0;
                    }
                   
                    if(arr[t]=='T')
                    {
                        if(CaughtTheif[t]==0)
                        {
                            countTheif++;
                            CaughtTheif[t]=1;
                            found=1;
                            break;
                        }
                        
                    }
                }
               
            }
        }
        return countTheif;
    }

int main()
{
    char a[]={'T','T','P','P','T','P'};
    int theifs=catchThieves(a,6,2);
    cout<<theifs<<endl;
    return 0;
}