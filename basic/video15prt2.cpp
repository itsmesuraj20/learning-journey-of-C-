//Print the fibonaaci no using Function
#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int t1=0,t2=1;
    int nextTerm;

    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return ;
}

int main()
{
    int a;
    cin>> a;

    fib(a);
    return 0;
}