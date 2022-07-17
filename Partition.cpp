#include<iostream>
#include<string>
#include<vector>
using namespace std;
int xi=0;

bool getPartition(vector<int>&arr,int k,vector<vector<int>>&partition,vector<int>&sum)
    {
        cout<<"gets CAlled"<<++xi<<endl;
        bool a=false;
        int n=arr.size();
        if(n==0)
        {
            cout<<"get here"<<xi++<<endl;
            if(partition.size()==k)
            {
              for(int x=0;x<(k-1);x++)
              {
                  if(sum[x]!=sum[x+1])
                  return false;
              }
              return true;
            }
            else{
                cout<<"here"<<endl;
                 return false;
            }
           
        }
        if(partition.size()==0)
        {
            cout<<"Partition size=0"<<endl;
            for(int i=0;i<n;i++)
            {
                partition.push_back({arr[i]});
                sum[0]+=arr[i];
                vector<int>x=arr;
                auto iterator=x.begin()+i;
                x.erase(iterator);
               
                bool ans=getPartition(x,k,partition,sum);
                if(ans==true)
                {
                  return ans;  
                }
                sum[0]=0;
                partition.pop_back();
            }
        }
       
           if(partition.size()<k)
           {
               cout<<"Partition size<K"<<endl;
              for(int i=0;i<=partition.size();i++)
               {
                  partition.push_back({});
                  for(int j=0;j<n;j++)
                   {
                      
                       partition[i].push_back(arr[j]);
                       sum[i]+=arr[j];
                       vector<int>x=arr;
                       auto iterator=x.begin()+j;
                       x.erase(iterator);
                       bool a=getPartition(x,k,partition,sum);
                       if(a==true)
                       {
                           return true;
                       }
                       partition[i].pop_back();
                       sum[i]-=arr[j];
                   }
                   partition.pop_back(); 
               }
               
           }
           else
           { cout<<"Partition size==K"<<endl;
               for(int i=0;i<k;i++)
               {
                 for(int j=0;j<n;j++)
                   { 
                       partition[i].push_back(arr[j]);
                       sum[i]+=arr[j];
                       vector<int>x=arr;
                       auto iterator=x.begin()+j;
                       x.erase(iterator);
                       bool a=getPartition(x,k,partition,sum);
                       if(a==true)
                       {
                           return true;
                       }
                       partition[i].pop_back();
                       sum[i]-=arr[j];
                   } 
               }
           }
        
        return a;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
        vector<vector<int>> partitions;
        vector<int>sum(k,0);
        vector<int>array;
        for(int i=0;i<n;i++)
        {
          array.push_back(a[i]);  
        }
        bool ans=getPartition(array,k,partitions,sum);
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
    int a[]={1,5,11,5};
    int k=2;
    bool ans=isKPartitionPossible(a,4,k);
    cout<<ans<<endl;
    return 0;
}