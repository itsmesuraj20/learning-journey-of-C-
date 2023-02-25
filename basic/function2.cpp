//Find the given number is pythgoras triplet or not
#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z)
{
    int a=(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a1,b1,c1;
    cin>>a1>>b1>>c1;

    if(check(a1,b1,c1))
    {
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not A Pythagoream Triplet";
    }
    return 0;
}