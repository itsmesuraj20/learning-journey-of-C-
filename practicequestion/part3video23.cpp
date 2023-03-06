/* Find the longest continguous arthematic subarray  array 
question from apna college Timestamp-" 16:04/39:40" Video 23 (*.4v Array Challenge) */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int pd, curr,ans,n;
    cin>>n;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    ans=2;
    pd=a[1]-a[0];
    int j= 2;
    curr = 2;

    while(j<n)
    {
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr =2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}