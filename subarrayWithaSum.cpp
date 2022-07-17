#include<iostream>
#include<string>
#include<map>
using namespace std;

 int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	int currentSum=0;
    	int buffer=0;
        map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            buffer+=arr[i];
            m[buffer]++;
            cout<<m[buffer]<<endl;
            currentSum+=arr[i];
            //cout<<currentSum-sum<<endl;
            if(currentSum==sum)
            {
               count++; 
               //cout<<"came here in current==sum"<<endl;
            }
            if(m[currentSum-sum]==1)
            {
                count++;
               //cout<< "cma"<<endl;
            }
        }
       
        return count;
    }
int main()
{
    int array[]={4,3, 2, -7, 10,-7 ,-7 ,8 ,-3, -5, -9, 9 ,9 ,10, 0, -4, 0, 9, 8, -9, 10, -9, -4, 4, 3, -10, -4 ,-7, -2
,-3};
    int count=subArraySum(array,30,29);
    cout<<count<<endl;
    return 0;
}