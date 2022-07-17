#include<iostream>
#include<string>
#include<vector>
using namespace std;
int X=0;

 bool getPartition(int arr[],int n,int k,vector<vector<int>>&partition,vector<int>&sum,int index)
    {
        cout<<"came here"<<++X<<endl;
        bool ans=false;
        int ps=partition.size();
        if(index==n)
        {
            if(ps==k)
            {
                for(int i=0;i<k-1;i++)
                {
                    if(sum[i]!=sum[i+1])
                    {
                        return false;
                    }
                    
                }
                return true;
            }
            else{
                return false;
            }
        }
        if(ps==0)
        {
          partition.push_back({arr[index]});
          ans=getPartition(arr,n,k,partition,sum,index+1);
        }
        else{
            if(ps==k)
            {
                for(int i=0;i<k;i++)
                {
                    partition[i].push_back(arr[index]);
                    sum[i]+=arr[index];
                    ans=getPartition(arr,n,k,partition,sum,index+1);
                    if(ans==true)
                    {
                        return true;
                    }
                    partition[i].pop_back();
                    sum[i]-=arr[index];
                }
            }
            else if(ps<k)
            {
               
                for(int i=0;i<=ps;i++)
                {  
                    partition[i].push_back(arr[index]);
                    sum[i]+=arr[index];
                    ans=getPartition(arr,n,k,partition,sum,index+1);
                    if(ans==true)
                    {
                        return true;
                    }
                    partition[i].pop_back();
                    sum[i]-=arr[index];
                }
            }
        }
        return ans;
    }
 bool isKPartitionPossible(int a[], int n, int k)
    {
        vector<vector<int>> partitions;
        vector<int>sum(k,0);
        for(int i=0;i<k;i++)
        {
            partitions.push_back(vector<int>());
        }
        bool ans=getPartition(a,n,k,partitions,sum,0);
        for(auto i:partitions)
        {
            for(auto j:i)
            {
               cout<<j<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
int main()
{
   int a[]={2,1,4,5,6};
    int k=6;
    bool ans=isKPartitionPossible(a,5,k);
    cout<<ans<<endl;
    return 0;
}