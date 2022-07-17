
    
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int minSwap(int arr[], int n, int k) {
        int ns;
        int swaps=0;
       for(int i=0;i<n;i++)
       {
           ns=i+1;
           if(arr[i]>k)
           {
               while(arr[ns]>k && ns<=n)
                {
                    ns++;
                }
                    if(ns<n)
                    {
                        swap(arr[i],arr[ns]);
                        swaps++;
                        cout<<"Code came here"<<endl;
                        i=ns;
                    }
                    if(ns>=n)
                    {
                        break;
                    }
              
           }
           
       }
       return swaps;
    }

    int main()
    {
        int array[]={19,89,90};
         int k=9;
         int m=minSwap(array,3,k);
         cout<<m<<endl;
        return 0;
    }