 #include<iostream>
 #include<string>
 #include<algorithm>
 using namespace std;

 int findSwaps(string &S,int i)
    { int j;
    int swaps=0;
        for( j=i+1;j<S.length();j++)
        {
            if(S[j]=='[')
            {
                break;
            }
        }
        while(j>i)
        {
            swap(S[j],S[j-1]);
            swaps++;
            j--;
        }
        
      return swaps;  
        
    }
 int minimumNumberOfSwaps(string S)
    {
      int swaps=0;
      int count=0;
      for(int i=0;i<S.length();i++)
      {
          if(S[i]=='[')
          {
              count++;
          }
          else
          {
              count--;
              if(count<0)
              {
                  swaps=swaps+findSwaps(S,i);
                  cout<<S <<"here"<<endl;
                  count=1;
              }
          }
      }
      return swaps;
    }

    int main()
    {
        string S="]][[]][[";
        int swaps=minimumNumberOfSwaps(S);
        cout<<swaps<<endl;
        return 0;
    }