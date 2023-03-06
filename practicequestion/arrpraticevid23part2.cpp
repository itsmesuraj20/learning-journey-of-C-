/* find the sum of each sub-array of a given array
Example-
given array [ 1,2,2]
sub array will be-
[1],[1,2],[1,2,3],[2],[2,2],[2]<-ye last wala element h
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum=sum+a[j];
            cout<<sum<<" "; 
        }
          
    }
    return 0;
}