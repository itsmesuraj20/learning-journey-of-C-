#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int k)
{
    int s=0; //starting value
    int e=n; // ending value
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<BinarySearch(arr,n,k);
    
    return 0;
}