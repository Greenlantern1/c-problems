#include<iostream>
 #include<string>
 #include<vector>
 #include<algorithm>
 #include<map>
 using namespace std;
 int isMax(int a,int b,int c)
 {
     
     if(a>b && a>c)
     {
        return a;
     }
     if(b>c && b>a)
     {
        return b;
     }
     if(c>b && c>a)
     {
        return c;
     }

     
 }
 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           vector<int>commonElements;
           int i=0;
           int j=0;
           int k=0;
           int greatest=0;
           map<int,int>m;
           while(i<n1 && j<n2 && k<n3)
           {
              if(A[i]==B[j] && B[j]==C[k])
               {
                   cout<<"ca";
                   if(m[A[i]]==0)
                   {
                    m[A[i]]=1;
                   commonElements.push_back(A[i]);
                  
                   }
                   i++;
                   j++;
                   k++;
               }
               else
               {
                  greatest=isMax(A[i],B[j],C[k]);
                  if(A[i]==greatest)
                  {
                     while(B[j]<greatest && j<n2)
                     {
                         j++;
                      }
                      while(C[k]<greatest && k<n3)
                     {
                         k++;
                      }
                  }
                  if(B[j]==greatest)
                  {
                    while(A[i]<greatest && i<n1)
                     {
                         i++;
                      }
                      while(C[k]<greatest && k<n3)
                     {
                         k++;
                      }  
                  }
                  if(C[k]==greatest)
                  {
                      while(B[j]<greatest && j<n2)
                     {
                         j++;
                      }
                      while(A[i]<greatest && i<n1)
                     {
                         i++;
                      }
                  }
                  
               }
           }
           return commonElements;
        }

 int main()
 {
     
     int A[]={1,5,10,20,40,80};
     int B[]={6,7,20,80,100};
     int C[]={3,4,15,20,30,70,80,120};
     vector<int>a=commonElements(A,B,C,6,5,8);
     for(auto i:a)
     {
         cout<<i<<endl;
     }
     return 0;
 }