class Solution{
public:
    int operateNum(int a,int b,char op)
    {
        if(op=='&')
        {
            return a&b;
        }
        else if(op=='|')
        {
            return a|b;
        }else if(op=='^')
        {
            return a^b;
        }
        
    }
    bool operate(char a,char b,char op)
    {
        bool res1=(a=='T')?true:false;
        bool res2=(b=='T')?true:false;
        if(op=='&')
        {
            return res1&res2;
        }
        else if(op=='|')
        {
            return res1|res2;
        }else if(op=='^')
        {
            return res1^res2;
        }
    }
    int countWays(int N, string S){
       string s,operand;
       for(auto i:S)
       {
           if(i=='T'||i=='F')
           {
               s.push_back(i);
           }
           else{
               operand.push_back(i);
           }
       }
       int size=s.size();
       vector<vector<long long>>True(size,vector<long long>(size,0));
       vector<vector<long long>>False(size,vector<long long>(size,0));
       for(int x=0;x<size;x++)
       {
           int i,j;
           i=0;
           for(j=x;j<size;j++)
           {
               if(i==j)
               {
                   if(s[i]=='T')
                   {
                       True[i][j]=1;
                       False[i][j]=0;
                   }
                   else if(s[i]=='F')
                   {
                      True[i][j]=0;
                      False[i][j]=1; 
                   }
               }
               else if(j-i==1)
               {
                   bool ans=operate(s[i],s[j],operand[i]);
                   if(ans==false)
                   {
                       True[i][j]=0;
                       False[i][j]=1;
                   }
                   else{
                       True[i][j]=1;
                       False[i][j]=0;
                   }
               }
               else if(j-i>1)
               {
                   long long  countT=0;
                   long long  countF=0;
                   for(int k=i;k<j;k++)
                   {
                     countT+=operateNum(0,0,operand[k])*False[i][k]*False[k+1][j]+operateNum(0,1,operand[k])*False[i][k]*True[k+1][j]+operateNum(1,0,operand[k])*True[i][k]*False[k+1][j]+operateNum(1,1,operand[k])*True[i][k]*True[k+1][j];
                     countF+=(operateNum(0,0,operand[k])^1)*False[i][k]*False[k+1][j]+(operateNum(0,1,operand[k])^1)*False[i][k]*True[k+1][j]+(operateNum(1,0,operand[k])^1)*True[i][k]*False[k+1][j]+(operateNum(1,1,operand[k])^1)*True[i][k]*True[k+1][j];
                   }
                   True[i][j]=countT;
                   False[i][j]=countF;
               }
               
               i=i+1;
           }
          
       }
       
       //see the matrix
       for(auto x:True)
       {
           for(auto i:x)
           {
               cout<<i<< " ";
           }
           cout<<endl;
       }
       for(auto x:False)
       {
           for(auto i:x)
           {
               cout<<i<< " ";
           }
           cout<<endl;
       }
       return True[0][size-1]%1003;
    }
};