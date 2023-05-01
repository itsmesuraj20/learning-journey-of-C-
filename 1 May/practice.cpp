#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="451215";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}