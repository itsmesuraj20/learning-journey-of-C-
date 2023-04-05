//Two Dimensional array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }    
    }
    cout<<endl; 
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==target)
            {
                cout<<i<<" "<<j<<endl;
                flag=true;
            }

        }
        
    }
    if(flag)
    {
        cout<<"Element Found in the array Elements"<<" ";
    }
    else
    {
        cout<<"Not found";
    }
    


    return 0;
}