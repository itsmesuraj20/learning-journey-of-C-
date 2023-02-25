#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int f=1;
   for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int f=1,s;
    cin>>s;
    cout<<"Factorial of the no"<<" is="<<" "<<fact(s);
    return 0;
}