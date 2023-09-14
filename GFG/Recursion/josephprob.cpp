//Killing the all the person and check which left as last 
#include<bits/stdc++.h>
using namespace std;

int josh(int , int);

int main()
{
    int n,k;
    cin>>n>>k;

    int res=josh(n,k);
    cout<<"The last one is left = "<<res<<endl;
    return 0;
}

int josh(int n,int k)
{
    if(n==1) return 0;

    else return ((josh(n-1,k)+k)%n);
}0