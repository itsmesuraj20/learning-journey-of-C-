#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Program to find the maximum no of among three
    int a,b,c;
    cout<<"Enter the digits"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"Greatest is "<<a<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<"Greatest is "<<b<<endl;
    }
    else
    {
        cout<<"Greatest is "<<c<<endl;
    }
    return 0;
}
