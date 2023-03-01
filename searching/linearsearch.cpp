#include<bits/stdc++.h>
using namespace std;

int Linear(int arr[],int n,int k)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(k==arr[i])
        {
        return i; 
        }
    }
    return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Found the key at "<<Linear(arr,n,k)<<" this position"<<endl;
    return 0;
}