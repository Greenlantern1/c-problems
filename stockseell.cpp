#include<iostream>
using namespace std;
void stockBuySell(int price[], int n) {
    // code here
    int buy=0;
    int buyday=0;
    int profit=0;
    for(int i=0;i<n-1;i++)
    {
        if(price[i]<price[i+1])
        {
            if(buy==0)
            {
                buy=1;
                buyday=i;
            }
        }
        if(price[i]>price[i+1])
        {
            if(buy==1)
            {
                cout<<"("<<buyday<<" "<<i<<")";
                profit=1;
                buy=0;
            }
        }
        
        
    }
    if(buy==1)
    {
      cout<<"("<<buyday<<" "<<n-1<<")"<<endl;
    }
    
    if(profit==0)
    {
        cout<<"No Profit"<<endl;
    }
    
}
int main()
{
    int A[]={100,180,260 ,310, 40, 535 ,695};
    stockBuySell(A,7);
    return 0;
}