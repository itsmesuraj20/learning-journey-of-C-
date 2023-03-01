#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==k)
        {
            break;
            flag=flag+1;
        }
    }
     if(flag==1)
       {
        cout<<"Found key";
       }
       else{
        cout<<"found cant be succeed";
       }
    return 0;
}  