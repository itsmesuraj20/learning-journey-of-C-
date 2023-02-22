/* 
Write a program in C++/Java to print this pattern
*****
*   *
*   *
*   *
*****

*/
#include<iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Enter the rows, columns";
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(i==1 || i==rows || j==1 || j==cols)
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<endl;
    }
}