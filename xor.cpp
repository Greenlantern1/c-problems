#include<iostream>
#include<string>
using namespace std;
string convertToPalindrome(string a)
{
    int i=0;
    int j=a.length()-1;
    int count=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            a[i]=a[i]^a[j];
            a[j]=a[j];
            count++;
        }
        i++;
        j--;
    }
    cout<<count<<endl;
    return a;
}
int main()
{
    string a;
    a="Hello";
    a=convertToPalindrome(a);
    cout<<a<<endl;
    return 0;
}