#include<iostream>
#include<string>
using namespace std;
int main()
{
     string smallestNumber;
        int sum=0;
        int maxSum=0;
        int D;
        cin>>D;
        int S=42;
        smallestNumber.push_back('1');
        for(int i=1;i<D;i++)
        {
            smallestNumber.push_back('0');
        }
        for(int i=0;i<D;i++)
        {
           maxSum=9*(D-i-1);
           int temp=(int)(smallestNumber[i])-48;
           cout<<temp<<endl;
           sum=sum+temp;
           cout<<sum<<endl;
           if(sum+maxSum<S)
           {  
              if(i==(D-1))
              {
                   for(int j=1;j<=9;j++)
                {
                
                 if((sum+j)==S)
                 {
                     smallestNumber[D-1]=(char)(j+48);
                 }
                 
               } 
              }
               for(int j=1;j<=9;j++)
               {
                 sum=sum-temp+j;
                 if((sum+maxSum)>=S)
                 {
                     smallestNumber[i]=(char)(j+48);
                     break;
                 }
                 temp=j;
               } 
           }

          
        }
              
               cout<<smallestNumber<<endl;
      
    return 0;
}