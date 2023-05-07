//Find the second largest number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10 ,20,30,40,50,6,0,345};
    int lar1=INT_MAX;
    int lar2=INT_MAX;

    int len=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if(arr[i]<lar1)
        {
            lar2=lar1;
            lar1=arr[i];
        }

        else if (lar2>arr[i])
        {
            lar2=arr[i];
        }
        
    }

    cout<<"The Second largest element is= "<<lar2;
    
}