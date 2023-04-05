//First Repeating Elements Vid 8.5 question 1;
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;//Iske constraints change krdoge to it will start working
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (idx[a[i]]!=-1)
        {
            /* code */
            minidx= min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minidx+1<<endl;
    }

    return 0;
}
