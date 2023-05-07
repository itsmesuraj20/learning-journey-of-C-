//largest and smallest no in an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mn=INT_MAX;
    int mx=INT_MIN;
    
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    
    for (int i = 0; i < n; i++) {
        if(arr[i]<mn)
        {
            mn=arr[i];//Minimum Element
        }
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    
    cout<<"The Smallest among all array is ="<<" "<<mn<<endl;
    cout<<"The Largest among all array is ="<<" "<<mx;
    return 0;
}