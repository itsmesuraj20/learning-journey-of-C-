#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i;
    for ( i = 1; i <=30; i++)
    {
        if(i%2==0)
        /* code */
        continue;
        cout<<"Hello "<<i<<endl;
    }
    for(i=1;i<=30;i++){
        if(i%2==0)
        break;
        cout<<"Hello "<<i<<endl;
    }
    
 return 0;   
}