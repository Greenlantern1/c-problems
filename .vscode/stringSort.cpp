#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string nextPermutation(string a)
	    {
	        int l=a.length();
	        int pivot=2222;
	        //finding the pivot
	        int i;
	        for(i=l-1;i>0;i--)
	        {
	            if(a[i]>a[i-1])
	            {
	               pivot=i-1;
	              break;
	            }
	        }
	        //No more pernutations allowed
	        if(i==0)
	        {
	            string s;
	            return s;
	        }
	        
	        //Swap buisness
	        int k=l-1;
	        while(a[k]<a[pivot])
	        {
	            k--;
	        }
	        swap(a[k],a[pivot]);
	        int e=l-1;
	        for(int j=pivot+1;j<(l-pivot+1)/2;j++)
	        {
	            
	            swap(a[j],a[e]);
	            e--;
	        }
	        return a;
	    }
		vector<string>find_permutation(string S)
		{
		   vector<string>permutations;
		   sort(S.begin(),S.end());
		   permutations.push_back(S);
		   int i=0;
		  

		   while(nextPermutation(permutations[i]).length()!=0)
		   {
		       permutations.push_back(nextPermutation(permutations[i]));
		       i++;
		   }
		   return permutations;
		   
		}
int main()
{
   
    string S="AA";
    vector<string>a;
    a=find_permutation(S);
    for(auto i:a)
    {
        cout<<i<<endl;
    }
    


    return 0;
}