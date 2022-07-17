#include<iostream>
#include<vector>
#include<string>
using namespace std;
//Function to get the possible combinations 
vector <string> getPossibleCombinations(vector<string>a,vector<int>in,int index)
{ 
 
  if(index<in.size())
  {
      vector <string> buff = getPossibleCombinations(a,in,index+1);
      vector <string> ans;
      int numberPressed=in[index];
      for(int z=0;z<a[numberPressed].size();z++)
        {
            if(buff.size()==0)
            {
            string h=a[numberPressed];
            string ioi(1,h[z]);
            ans.push_back(ioi);
            }
            else{
            for(auto i=0;i< buff.size();i++)
            {   
            string h=a[numberPressed];
            string ioi=h[z]+buff[i];
            ans.push_back(ioi);
            }
            }
        }
      return ans;
  }
  else
  {  vector <string>a;
      return a;
  }

}

int main()
{
    vector <string> a={"!?","abc","def","ghi","jkl","mnop","qrst","uv","wxyz",".;"};
    //this is the keypad combinations:)
    vector <int> inputN;
    //getting the presses numbers
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        inputN.push_back(x);
    } 
    
    vector <string> b=getPossibleCombinations(a,inputN,0);
    for(auto i:b)
    {
        cout<<i<<endl;
    }
    cout<<"Total possible combination"<<b.size()<<endl;
    return 0;
}