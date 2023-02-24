#include<bits/stdc++.h>
using namespace std;

bool prime(int a)
{
    bool flag = false; // Initialize flag to false
    for(int i=2;i<=sqrt(a);i++) // Change loop condition to i<=sqrt(a)
    {
        if(a%i==0)
        {
            flag = true; // Set flag to true if a is not a prime
            break;  
        }
    }
    return !flag; // Return true if a is prime, false otherwise
}

int main()
{
    int n;
    cin>>n;
    bool flag = prime(n); // Declare flag and assign the value returned by prime()
    if(flag)
    {
        cout<<"It is a prime no"<<" "<<n;
    }
    else
    {
        cout<<"Non-prime No";
    }
    return 0;
}
