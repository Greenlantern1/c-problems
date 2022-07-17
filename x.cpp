#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> getSum(vector<int> &A, int B,int sum,int index)
    {
       vector<vector<int>>ans;
       if(sum>B)
       {
           return ans;
       }
       if(sum==B)
       {
           ans.push_back(vector<int>());
           return ans;
       }
       for(int i=index;i<A.size();i++)
       {
           if(A[i]==A[i+1])
           {
              continue;
           }
           sum=sum+A[i];
           vector<vector<int>>x=getSum(A,B,sum,i);
           sum=sum-A[i];
           for(auto it:x)
           {
               it.insert(it.begin(),A[i]);
               ans.push_back(it);
           }
       }
       return ans;
    }
   
void findSum(vector<int> &A, int B, vector<vector<int>> &ans, vector<int> curr, int i){
        if(i >= A.size()){
            return;
        }
        if(B == 0){
            ans.push_back(curr);
            return;
        }
        if(B < 0){
            return;
        }
        if(B > 0){
            curr.push_back(A[i]);
            findSum(A, B - A[i], ans , curr, i);
            curr.pop_back();
            findSum(A, B, ans, curr, i + 1);
        }
        return;
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<int> curr;
        vector<vector<int>> ans;
        sort(A.begin(), A.end());
        //removing duplicates
        int i = 0;
        int idx = 1;
        while(idx < A.size()){
            if(A[idx] == A[i]){
                idx++;
            }
            else{
                i++;
                A[i] = A[idx];
                idx++;
            }
        }
        i++;
        while(i != idx){
            A.pop_back();
            i++;
        }
        //Calling the findSum function
        findSum(A, B, ans, curr, 0);
        return ans;
    }

    int main()
    {
        vector<int>A={1,8,5,6,9,8,7,3,8,1};
        int B=23;
        vector<vector<int>>ans1=combinationSum(A,B);
        vector<vector<int>>ans2=getSum(A,B,0,0);
        
        cout<<ans1.size()<<endl;
        cout<<ans2.size()<<endl;
        for(int i=0;i<ans1.size();i++)
        {
            for(int j=0;j<ans1[i].size();j++)
            {
               cout<<ans1[i][j]-ans2[i][j]<<" ";
            }
            cout<<endl;
        }
            return 0;
    }