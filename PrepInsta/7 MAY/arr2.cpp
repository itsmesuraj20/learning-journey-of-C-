#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MAX;
    
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    
    for (int i = 0; i < n; i++) {
        if(arr[i]<mx)
        {
            mx=arr[i];
        }
    }
    
    cout<<"The Smallest among all array is"<<" "<<mx;
    return 0;
}