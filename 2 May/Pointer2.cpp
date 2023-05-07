#include<bits/stdc++.h>
using namespace std;

int main()
 {
//     int a=10;
//     int *ap;
//     ap=&a;
    
//     cout<<&a<<endl;
//     cout<<ap<<endl;
        int ap[]={10,20,30,40};
        // cout<<*(ap+1)<<endl;
        cout<<*ap<<endl;

        int *ptr=ap;
        for (int i = 0; i < 3 ; i++)
        {
            cout<<*ptr<< endl;
            ptr++;
        }

        return 0;
 }

