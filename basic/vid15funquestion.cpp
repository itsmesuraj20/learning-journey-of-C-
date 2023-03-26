//Question- FInd the no of prime in between two given numbers
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
           return false;
        }
    }
    return true;
}



int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    if(isPrime(i))
    {
        cout<<i<<endl;
    }
    return 0;
}