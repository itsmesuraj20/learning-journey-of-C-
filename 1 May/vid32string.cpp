#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="hello";
    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;

     transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<s<<endl;
}