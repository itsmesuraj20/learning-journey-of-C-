//problem is to find the max number from the next element meaning max element find karna h next elements is ,it should be in the pair
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=INT_MIN;// alway remeber that max mein hmesha minimum value jaayegi okdokie
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<" "; 
   
    }
       return 0; 
}
//Chcek