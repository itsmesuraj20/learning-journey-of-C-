//Converting to Upper case
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //To upper case
    string str="Suraj";
    int n=str.length();
    for (int i = 0; i < n; i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]-=32;
        }       
}
cout<<str<<endl;
    //To lower case
    for (int i = 0; i < n; i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    
    cout<<str;


}