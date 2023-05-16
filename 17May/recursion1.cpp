//recursion started

#include<bits/stdc++.h>
using namespace std;
int Sum(int);
int main()
{
    int a;
    cin>>a;

    int sum=Sum(a);
    cout<<sum;
}

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int prevSum=Sum(n-1);
    return n+ prevSum;
}