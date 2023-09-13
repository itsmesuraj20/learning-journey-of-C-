#include<bits/stdc++.h>
using namespace std;

void Checks(string s,string c="",int i=0)
{
    int n=s.length();
    if(i==n)
    {
        cout<<c<<" ";
        return ;
    }
    Checks(s,c+s[i],i+1);
    Checks(s,c,i+1);


    
}

int main()
{
    string s;
    cin>>s;

    Checks(s);
    return 0;
}

