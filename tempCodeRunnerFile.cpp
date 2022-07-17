vector<int>getSum(vector<vector<int>>team)
{
  vector<int>sum;
  int x=0;
  for(auto i:team)
  {
      for(auto it:i)
      {
       x=x+it;
      }
      sum.push_back(x);
      x=0;
  }
  return sum;
}
vector<vector<int>>getTeam(vector<int>a,vector<int>b,int index,string t)
{
   int n=a.size();
   vector<vector<int>>ans;
   if(index>n-1)
   {
       ans.push_back(vector<int>());
       return ans;
   }
   if(index==(n-1))
   {
     if(t=="T1")
     {
         ans.push_back({a[index]});
         
         return ans;
     }
     else{
         ans.push_back({b[index]});
         return ans;
     }
   }
   
   if(t=="T1")
   {
    for(int i=index;i<n;i++)
    {
       vector<vector<int>>x=getTeam(a,b,i+1,"T2");
       for(auto it:x)
       {
          it.insert(it.begin(),a[i]);
          ans.push_back(it);
       }
      
    }
   }
   else if(t=="T2")
   {
     for(int i=index;i<n;i++)
    {
      vector<vector<int>>x=getTeam(a,b,i+1,"T1");
       for(auto it:x)
       {
           it.insert(it.begin(),b[i]);
           ans.push_back(it);
       }
      
    }
   }
  return ans;
}