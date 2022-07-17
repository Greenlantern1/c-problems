#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,s2;
    cout<<"Insert the two strings"<<endl;
    getline(cin,s);
    getline(cin,s2);
    string t=s+s;
    //size_t found=t.find(s2);
    //cout<<found;
    //if(found!=string::npos)
    if(t.find(s2)!=string::npos)
    {
        cout<<"Part of the rotated string"<<endl;
    }
    else
    return 0;
    cout<<s<<" "<<s2;
    return 0;
}

