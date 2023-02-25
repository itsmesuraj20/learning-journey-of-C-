//Print the fatorial of the given number and nCr
#include<bits/stdc++.h>
using namespace std;

int fact(int a)// funmction to print factorial only
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }                           //Ye pe changes howe okdokie
    return f;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}