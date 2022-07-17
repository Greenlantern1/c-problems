 #include<iostream>
 using namespace std;

 int trailingZeroes(int N)
    {
        int fact=1;
        int count=0;
        // Write Your Code here
        for(int i=1;i<=N;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial="<<fact<<endl;
        while(fact%10==0)
        {
            count++;
            fact=fact/10;
        }
      return count;  
    }
    int main()
    {
        int nZ=trailingZeroes(11);
        cout<<nZ<<endl;
        return 0;
    }