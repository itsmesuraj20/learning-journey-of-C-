//4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course Apna College

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the row and columns";

    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=c;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}